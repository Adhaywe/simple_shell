#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>

#define EXIT

extern char **environ;

/* strtok functions */
int token_length(char *string, char *delimiter);
int number_of_tokens(char *string, char *delimiter);
char **_strtok(char *line, char *delimiter);

/* args control functions */
int *get_args(char *line, int last_ret);
int exec_args(char **commands, char **parameters, int *last_ret);
int exec2_args(char **commands, char **parameters, int *last_ret);
int control_args(int *last_ret);

/* getline function */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void assign_lineptr(char **lineptr, size_t *n, char *buffer, size_t b);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);

#endif
