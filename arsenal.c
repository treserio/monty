#include "monty.h"
/**
 * catapult - pchar - lobs(prints) the ascii version of the first coconut(int)
 * Description: in the flock(dbl lnk list)
 * @flock: a node in the dbl linked list
 * @ln_n: the current line number of the input file
 */
void catapult(laden_swallow **flock, unsigned int ln_n)
{
	(void)ln_n;
	if (!flock || !*flock)
	{
		phrase[2] = "NO_PCHAR";
		return; }
	if ((*flock)->coconut >= 32 && (*flock)->coconut <= 126)
		printf("%c\n", (*flock)->coconut);
	else
	{
		phrase[2] = "ER_PCHAR";
		return; }
}
/**
 * holy_hand_grenade - mod - what's left(mod) after the grenade goes off
 * Description: on a laden_swallow(node)
 * @flock: a node in the dbl linked list
 * @ln_n: the current line number of the input file
 */
void holy_hand_grenade(laden_swallow **flock, unsigned int ln_n)
{
	laden_swallow *bobs, *herberts;

	if (!flock || !*flock)
	{
		phrase[2] = "ER_MOD";
		return; }
	for (; flock && *flock && (*flock)->african; (*flock) = (*flock)->african)
	;
	bobs = *flock;
	if (bobs->european)
	{
		herberts = bobs->european;
		if (bobs->coconut == 0)
		{
			phrase[2] = "ER_DIV_ZERO";
			return; }
		herberts->coconut = herberts->coconut % bobs->coconut;
		killer_rabbit(flock, ln_n);
	}
	else
	{
		phrase[2] = "ER_MOD";
		return; }
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
