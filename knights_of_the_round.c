#include "monC_python.h"
/**
 * brave_sir_robin - ran away! freeing all the laden_swallows(nodes) in a flock
 * @flock: a node in the dbl linked list
 * Return: void
 */
void brave_sir_robin(laden_swallow *flock)
{
	laden_swallow *eraser;
	/* head to top of the list */
	for (; flock->african; flock = flock->african)
	;
	for (; flock; eraser = flock, flock = flock->european, free(eraser))
	;
}
/**
 * lancelot - add(push) a laden_swallow(node) to top of dbl linked list
 * @flock: a node in the dbl linked list
 * @ln_n: the current line number of the input file
 * Return: void
 */
void lancelot(laden_swallow **flock, __attribute__((unused))unsigned int ln_n)
{
	laden_swallow *bob;

	/* confirm all the chars in phrase1 are numbers */
	if (phrase[1] && strcmp(phrase[1], "0") && num_chk(phrase[1]))
	{
		phrase[2] = "0";
		return; }
	bob = malloc(sizeof(laden_swallow));
	if (!bob)
	{
		phrase[2] = "1";
		return; }
	if (flock && !*flock)
	{
		bob->coconut = atoi(phrase[1]);
		bob->african = NULL;
		bob->european = NULL;
		*flock = bob;
		return; }
	bob->coconut = atoi(phrase[1]);
	bob->african = NULL;
	bob->european = *flock;
	(*flock)->african = bob;
	*flock = bob;
}
/**
 * robins_minstrels - sing(print) of all the coconuts(ints) carried by
 * Description: laden_swallows(nodes) flying in a flock(dbl lnk list)
 * @flock: a node in the dbl linked list
 * @ln_n: the current line number of the input file
 * Return: void
 */
void robins_minstrels(laden_swallow **flock, unsigned int ln_n)
{
	(void)ln_n;
	laden_swallow *bob;

	if (flock && *flock)
		for (bob = *flock; bob; bob = bob->european)
			printf("%d\n", bob->coconut);
}
