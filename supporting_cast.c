#include "monty.h"
/**
 * i_want_to_sing - pint - sing(print) of the coconut(int) at the head of the
 * Description:  flock(dbl link list)
 * @flock: a node in the dbl linked list
 * @ln_n: the current line number of the input file
 */
void i_want_to_sing(laden_swallow **flock, unsigned int ln_n)
{
	laden_swallow *herbert;

	(void)ln_n;
	if (!flock || !*flock)
	{
		phrase[2] = "ER_PINT";
		return; }
	herbert = *flock;
	for (; herbert && herbert->african; herbert = herbert->african)
	;
	printf("%d\n", herbert->coconut);
}
/**
 * killer_rabbit - pop - bites(pop) the head off the first knight to approach!
 * @flock: a node in the dbl linked list
 * @ln_n: the current line number of the input file
 */
void killer_rabbit(laden_swallow **flock, unsigned int ln_n)
{
	laden_swallow *sir_bors;

	(void) ln_n;
	if (!flock || !*flock)
	{
		phrase[2] = "ER_POP";
		return; }
	sir_bors = *flock;
	for (; sir_bors && sir_bors->african; sir_bors = sir_bors->african)
	;
	if (sir_bors->european)
	{
		*flock = sir_bors->european;
		(*flock)->african = NULL; }
	else
		*flock = NULL;

	free(sir_bors);
}
/**
 * patsy - add - faithful patsy bangs(adds) coconuts(ints) together for that
 * Description: sweet gallopy sound.
 * @flock: a node in the dbl linked list
 * @ln_n: the current line number of the input file
 */
void patsy(laden_swallow **flock, unsigned int ln_n)
{
	laden_swallow *left, *right;

	if (!flock || !*flock)
	{
		phrase[2] = "ER_ADD";
		return; }
	left = *flock;
	for (; left->african; left = left->african)
	;
	if (left->european)
	{
		right = left->european;
		right->coconut = left->coconut + right->coconut;
		killer_rabbit(flock, ln_n);
	}
	else
	{
		phrase[2] = "ER_ADD";
		return; }
}
/**
 * robins_minstrels - pall - sing(print) of all the coconuts(ints) carried by
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
 * tim_the_enchanter - swap - transforms(swaps) a laden_swallow(node) into
 * Description: another one
 * @flock: a node in the dbl linked list
 * @ln_n: the current line number of the input file
 */
void tim_the_enchanter(laden_swallow **flock, unsigned int ln_n)
{
	laden_swallow *bob;

	(void)ln_n;
	if (!flock || !*flock)
	{
		phrase[2] = "ER_SWAP";
		return; }
	bob = *flock;
	for (; bob && bob->african; bob = bob->african)
	;
	if (!bob->european)
	{
		phrase[2] = "ER_SWAP";
		return; }
	*flock = bob->european;
	(*flock)->african = NULL;
	bob->european = (*flock)->european;
	bob->african = *flock;
	(*flock)->european = bob;
}