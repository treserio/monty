#include "monty.h"
char **phrase = NULL;
/**
 * main - read and run a MONTY style file
 * @argc: arguements sent to executable
 * @argv: array of strings containing instructions to executable
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	char *line = 0;
	FILE *script;
	unsigned int ln_num = 1;
	int ln_len = 0;
	size_t sz_line = 0;
	laden_swallow *flock = NULL;
	void (*scene)(laden_swallow **, unsigned int);
	/* check for correct usage */
	if (argc != 2)
		dprintf(2, "USAGE: monty file\n"), exit(EXIT_FAILURE);
	script = fopen(argv[1], "r");
	if (!script)
		dprintf(2, "Error: Can't open file %s\n", argv[1]), exit(EXIT_FAILURE);
	for (; (ln_len = getline(&line, &sz_line, script)) != EOF; ++ln_num)
	{
		phrase = prompter(line, ' ', ln_len);
		if (!phrase[0] || !strcmp(phrase[0], "nop") || !phrase[0])
		{
			free(phrase[1]), free(phrase[0]), free(phrase);
			continue; }
		/* scene is the returned function pointer */
		scene = bridge_of_death(phrase);
		/* check if scene & run, else unknown instruct error */
		if (scene)
			scene(&flock, ln_num);
		else
			phrase[2] = "0";
		/* exit case with errors */
		if (phrase[2])
		{
			ni(flock, ln_num, line, script); }
		free(phrase[1]), free(phrase[0]), free(phrase); }
	free(line), fclose(script), brave_sir_robin(flock);
	return (0); }
/**
 * bridge_of_death - check for a function from the first token of getline
 * @knight: array of strings tokened from getline
 * Return: the function pointer identified
 */
void (*bridge_of_death(char **knight))(laden_swallow **, unsigned int)
{
	unsigned int quester;
	bridge_keeper ask[] = {
		{"push", lancelot},
		{"pall", robins_minstrels},
		{NULL, NULL} };

	for (quester = 0; ask[quester].what_is_your_name; ++quester)
	{
		if (!strcmp(ask[quester].what_is_your_name, knight[0]))
			break; }

	return (ask[quester].what_is_your_quest);
}
/**
 * ni - handles error
 * @bob: head laden_swallow(node) of our flock(dbl linked list)
 * @ln_num: the current line in the input file
 * @line: the input buffer for getline
 * @script: the fd for the open file we're reading from
 */
void ni(laden_swallow *bob, unsigned int ln_num, char *line, FILE *script)
{
	if (!strcmp(phrase[2], "0"))
		dprintf(2, "L%u: unknown instruction %s\n", ln_num, phrase[0]);
	else if (!strcmp(phrase[2], "1"))
		printf("Error: malloc failed\n");

	/* free all values */
	free(phrase[1]), free(phrase[0]), free(phrase), brave_sir_robin(bob);
	free(line), fclose(script), exit(EXIT_FAILURE);
}
