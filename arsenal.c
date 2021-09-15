#include "monty.h"
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
		herberts->coconut = herberts->coconut / bobs->coconut;
		killer_rabbit(flock, ln_n);
	}
	else
	{
		phrase[2] = "ER_MOD";
		return; }
}
