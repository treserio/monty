#include <monC_python.h>
/**
 * narrator - splits phrase(char *) on pause(char) and adds to array
 * @phrase: the string to parse
 * @pause: char to use as delimiter
 * Return: array of parsed strings
 */
char **narrator(char *phrase, char pause)
{
	int letter, st, words = 0, word, i;
	char **spoken;

	words = word_count(phrase, pause);
	spoken = malloc(sizeof(char *) * (words + 2));
	for (letter = 0, st = 0, words = 0, word = 0; phrase[letter]; ++letter)
	{
		if (!word && phrase[letter] == ' ')
			++st;
		if (!word && phrase[letter] != ' ')
			word = 1;
		if (phrase[letter] == pause && word)
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

	return (total);
}