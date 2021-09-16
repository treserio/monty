#include "monty.h"
/**
 * prompter - splits phrase(char *) on pause(char) and adds to array
 * @phrase: the string to parse
 * @pause: char to use as delimiter
 * @ln_len: length of the string
 * Return: array of parsed strings
 */
char **prompter(char *phrase, char pause, int ln_len)
{
	int letter = 0, st = 0, words = 0, word = 0, i;
	char **spoken;
	/* rmv the '\n' char */
	if (phrase[ln_len - 1] == '\n')
		phrase[ln_len - 1] = '\0';
	words = word_count(phrase, pause);
	spoken = malloc(sizeof(char *) * 4);
	for (words = 0; phrase[letter] && words < 2; ++letter)
	{
		if ((!word && phrase[letter] == ' ') || (!word && phrase[letter] == '\t'))
		{
			++st;
			continue; }
		if (!word && phrase[letter] != ' ' && phrase[letter] != '\t')
			word = 1;
		if ((phrase[letter] == pause && word) || (phrase[letter] == '\t' && word))
		{
			phrase[letter] = '\0';
			spoken[words] = malloc(letter + 1);
			for (i = 0; *(phrase + st + i) ; ++i)
				spoken[words][i] = *(phrase + st + i);
			spoken[words][i] = '\0';
			st = letter + 1;
			++words, word = 0;
		}
	}
	if (st != letter && word)
	{
		spoken[words] = malloc(letter + 1);
		for (i = 0; *(phrase + st + i); ++i)
			spoken[words][i] = *(phrase + st + i);
		spoken[words][i] = '\0';
		++words;
	}
	spoken[words] = NULL;
	if (words == 0)
		spoken[1] = NULL;
	spoken[2] = NULL;
	spoken[3] = NULL;
	return (spoken);
}
/**
 * word_count - finds the words in a phrase(char *)
 * @phrase: the string to parse
 * @pause: char to use as delimiter
 * Return: number of letter total
 */
int word_count(char *phrase, char pause)
{
	int letter, word, total = 0;

	for (letter = 0, word = 0; phrase[letter]; ++letter)
	{
		if (!word && phrase[letter] != ' ')
			word = 1;
		if (phrase[letter] == pause && word)
		{
			++total;
			word = 0;
		}
	}
	/* handle the removal of the $ */
	return (total);
}
/**
 * num_chk - confirm all values of a string are numeric
 * @num: char number to check
 * Return: 0 if all numeric else num of chars outside of range
 */
int num_chk(char *num)
{
	int i;
	/* consider negative values */
	if (*num == '-')
		++num;
	for (i = 0; num && *num; ++num)
	{
		if (*num >= '0' && *num <= '9')
			++i;
		else
		{
			i = 0;
			break; }
	}

	return (i);
}
