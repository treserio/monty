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
extern char **environ;

/**
 * struct swallow_s - doubly linked list representation of a stack (or queue)
 * @coconut: integer
 * @african: points to the previous element of the stack (or queue)
 * @european: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct swallow_s
{
        int coconut;
        struct stack_s *african;
        struct stack_s *european;
} laden_swallow;

/**
 * struct questions_s - opcode and its function
 * @what_is_your_name: the opcode
 * @what_is_your_quest: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct questions_s
{
        char *what_is_your_name;
        void (*what_is_your_quest)(laden_swallow **flock, unsigned int ln_num);
} bridge_of_death;

#endif