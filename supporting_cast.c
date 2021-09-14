#include "monty.h"
/**
 * robins_minstrels - sing(print) of all the coconuts(ints) carried by
 * Description: laden_swallows(nodes) flying in a flock(dbl lnk list)
 * @flock: a node in the dbl linked list
 * @ln_n: the current line number of the input file
 */
void robins_minstrels(laden_swallow **flock, unsigned int ln_n)
{
	laden_swallow *bob;

	(void)ln_n;
	for (; flock && *flock && (*flock)->african; *flock = (*flock)->african)
	;
	if (flock && *flock)
		for (bob = *flock; bob; bob = bob->european)
			printf("%d\n", bob->coconut);
}
/**
 * i_want_to_sing - sing(print) of the coconut(int) at the head of the
 * Description:  flock(dbl link list)
 * @flock: a node in the dbl linked list
 * @ln_n: the current line number of the input file
 * Return: void
 */
void i_want_to_sing(laden_swallow **flock, unsigned int ln_n)
{
	laden_swallow *herbert;

	(void)ln_n;
	herbert = *flock;
	if (!herbert)
	{
		phrase[2] = "NO_PINT";
		return; }
	printf("%d\n", herbert->coconut);
}
