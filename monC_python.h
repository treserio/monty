#ifndef _MON_C_PYTHON_
#define _MON_C_PYTHON_

/* Cast */
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
 * struct swallow_s - doubly linked list representation of a stack (or queue)
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
 * struct the_keeper_s - opcode and its function
 * @what_is_your_name: the opcode
 * @what_is_your_quest: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct the_keeper
{
	char *what_is_your_name;
	void (*what_is_your_quest)(laden_swallow **flock, unsigned int ln_num);
} questions;

/* global head of my stack */
extern char **phrase;

/* the_holy_grade.c */
void (*action(char **steps))(laden_swallow **, unsigned int);
void ni(laden_swallow *bob, unsigned int ln_num, char *line, FILE *script);

/* spam_spam_spam.c */
char **prompter(char *phrase, char pause, int ln_len);
int word_count(char *phrase, char pause);

/* knights_of_the_round.c */
void lancelot(laden_swallow **flock, unsigned int ln_num);

#endif
