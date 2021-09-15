#include "monty.h"
/**
 * the_black_knight - sub - removing(sub) limbs(nodes) the black knight
 * Description: fights on!
 * @flock: a node in the dbl linked list
 * @ln_n: the current line number of the input file
 */
void the_black_knight(laden_swallow **flock, unsigned int ln_n)
{
	laden_swallow *left_arm, *right_arm;

	if (!flock || !*flock)
	{
		phrase[2] = "ER_SUB";
		return; }
	for (; flock && *flock && (*flock)->african; (*flock) = (*flock)->african)
	;
	left_arm = *flock;
	if (left_arm->european)
	{
		right_arm = left_arm->european;
		right_arm->coconut = right_arm->coconut - left_arm->coconut;
		killer_rabbit(flock, ln_n);
	}
	else
	{
		phrase[2] = "ER_SUB";
		return; }
}
/**
 * brave_sir_robin - ran away! freeing all the laden_swallows(nodes) in a flock
 * @flock: a node in the dbl linked list
 * Return: void
 */
void brave_sir_robin(laden_swallow *flock)
{
	laden_swallow *eraser;
	/* head to top of the list */
	for (; flock && flock->african; flock = flock->african)
	;
	for (; flock; eraser = flock, flock = flock->european, free(eraser))
	;
}
/**
 * lancelot - push - add(push) a laden_swallow(node) to top of dbl linked list
 * @flock: a node in the dbl linked list
 * @ln_n: the current line number of the input file
 */
void lancelot(laden_swallow **flock, __attribute__((unused))unsigned int ln_n)
{
	laden_swallow *bob;

	/* confirm all the chars in phrase1 are numbers */
	if (!phrase[1] || !num_chk(phrase[1]))
	{
		phrase[2] = "ER_USG_PUSH";
		return; }
	bob = malloc(sizeof(laden_swallow));
	if (!bob)
	{
		phrase[2] = "ER_MALLOC";
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
