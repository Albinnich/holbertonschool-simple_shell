#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stddef.h>

int main(void);
char *_getline(void);
char **line_div(char *command, char **arr);
void handle_env(char *line);
void execute_command(char *line, char **argv)

#endif
