#include "monty.h"
/**
 * naughty_zoot - rotl - she's lit the beaken, and must be punished! send
 * Description: zoot(node) to the end of the line(dbl lnk list)!
 * @flock: a node in the dbl linked list
 * @ln_n: the current line number of the input file
 */
void naughty_zoot(laden_swallow **flock, unsigned int ln_n)
{
	laden_swallow *zoot;

	(void)ln_n;
	for (; flock && *flock && (*flock)->african; *flock = (*flock)->african)
	;
	if (flock && *flock)
	{
		zoot = *flock;
		/* find the last node */
		for (; (*flock)->european; *flock = (*flock)->european)
		;
		/* check if we only have one node */
		if ((*flock)->african)
		{
			(*flock)->european = zoot;
			zoot->african = *flock;
			zoot->european->african = NULL;
			*flock = zoot->european;
			zoot->european = NULL;
		}
	}
}
