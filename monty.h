#ifndef _MON_C_PYTHON_
#define _MON_C_PYTHON_

#define _POSIX_C_SOURCE 200809L
/* Cast of MonC_Python */
#include <dirent.h>
#include <errno.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * struct swallow - doubly linked list representation of a stack (or queue)
 * @coconut: integer
 * @african: points to the previous element of the stack (or queue)
 * @european: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct swallow
{
	int coconut;
	struct swallow *african;
	struct swallow *european;
} laden_swallow;

/**
 * struct questions - opcode and its function
 * @what_is_your_name: the opcode
 * @what_is_your_quest: function to handle the opcode
 * Description: list of questions asked by the_keeper of the bridge of death
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct questions
{
	char *what_is_your_name;
	void (*what_is_your_quest)(laden_swallow **flock, unsigned int ln_num);
} bridge_keeper;

/* global head of my stack */
extern char **phrase;

/* the_holy_grade.c - main function and things directly related */
void (*bridge_of_death(char **knight))(laden_swallow **, unsigned int);
void ni(laden_swallow *bob, unsigned int ln_num, char *line, FILE *script);

/* spam_spam_spam.c - string manipulation functions */
int num_chk(char *num);
char **prompter(char *phrase, char pause, int ln_len);
int word_count(char *phrase, char pause);

/* knights_of_the_round.c - div, sub, free, mul, push */
void bedevere(laden_swallow **flock, unsigned int ln_n);
void the_black_knight(laden_swallow **flock, unsigned int ln_n);
void brave_sir_robin(laden_swallow *flock);
void galahad(laden_swallow **flock, unsigned int ln_n);
void lancelot(laden_swallow **flock, unsigned int ln_num);


/* supporting_cast.c - pint, pstr, add, pall, swap */
void i_want_to_sing(laden_swallow **flock, unsigned int ln_n);
void line_of_monks(laden_swallow **flock, unsigned int ln_n);
void patsy(laden_swallow **flock, unsigned int ln_n);
void robins_minstrels(laden_swallow **flock, unsigned int ln_n);
void tim_the_enchanter(laden_swallow **flock, unsigned int ln_n);

/* supporting_cast2.c - rotl */
void naughty_zoot(laden_swallow **flock, unsigned int ln_n);

/* arsenal.c */
void catapult(laden_swallow **flock, unsigned int ln_n);
void holy_hand_grenade(laden_swallow **flock, unsigned int ln_n);
void killer_rabbit(laden_swallow **flock, unsigned int ln_n);

#endif
