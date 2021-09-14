#include "monC_python.h"
/**
 * lancelot - add(push) a *flock to a dbl linked list on top
 * @flock: the actions to perform in a scene
 * @ln_n: the actions to perform in a scene
 * Return: void
 */
void lancelot(laden_swallow **flock, __attribute__((unused))unsigned int ln_n)
{
	laden_swallow *bob;

	/* check if 2nd str can be converted to int */
	if (phrase[1] && strcmp(phrase[1], "0") && !atoi(phrase[1]))
	{
		phrase[2] = "0";
		return; }
	bob = malloc(sizeof(laden_swallow));
	if (!bob)
	{
		phrase[2] = "1";
		return; }
	if (!*flock && bob)
	{
		bob->coconut = atoi(phrase[1]);
		bob->african = NULL;
		bob->european = NULL;
		return; }
	bob->coconut = atoi(phrase[1]);
	bob->african = NULL;
	bob->european = *flock;
	*flock = bob;
}
/* brave sir robin for exit */
void brave_sir_robin(laden_swallow *flock)
{
	laden_swallow *eraser;

	for (; flock->prev; flock = flock->prev)
	;
	for (; flock; eraser = flock, flock = flock->next, free(eraser))
	;
	(void)ln_n;
}