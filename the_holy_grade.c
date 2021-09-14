#include "monC_python.h"
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
			continue;
		}
		/* scene is the returned function pointer */
		scene = action(phrase);
		/* check if scene, then run(cut?) */
		if (!scene)
		{
			/* probably free stuff if busted */
			dprintf(2, "L%u: unknown instruction %s\n", ln_num, phrase[0]);
			exit(EXIT_FAILURE); }
		/* run command if present */
		scene(&flock, ln_num);
		/* exit case with errors */
		if (phrase[2])
			ni(flock, ln_num, line, script);
		free(phrase[1]), free(phrase[0]), free(phrase);
	}
	free(line), fclose(script);
	return (0);
}
/**
 * action - check for an executable function from the first token of getline
 * @steps: array of strings tokened from getline
 * Return: 0 on success
 */
void (*action(char **steps))(laden_swallow **, unsigned int)
{
	unsigned int quester;

	struct the_keeper ask[] = {
		{"push", lancelot},
		{NULL, NULL} };

	for (quester = 0; ask[quester].what_is_your_name; ++quester)
	{
		if (!strcmp(ask[quester].what_is_your_name, steps[0]))
			break;
	}

	return (ask[quester].what_is_your_quest);
}
/**
 * action - check for an executable function from the first token of getline
 * @steps: array of strings tokened from getline
 * Return: 0 on success
 */
void ni(laden_swallow *bob, unsigned int ln_num, char *line, FILE *script)
{
	if (!strcmp(phrase[2], "0"))
		dprintf(2, "L%u: unknown instruction %s\n", ln_num, phrase[0]);
	else if (!strcmp(phrase[2], "1"))
		printf("Error: malloc failed\n");
	/* full stack free */
	free(bob), free(phrase[1]), free(phrase[0]), free(phrase);
	free(line), fclose(script), exit(EXIT_FAILURE);
}
