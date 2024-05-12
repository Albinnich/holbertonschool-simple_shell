#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

#define MAX_CMD_LEN 256
#define MAX_ARGV_LEN 64

extern char **environ;

int execute_cmd(char *cmd, char *argv[]);
int line_div(char *line, char *args[]);
char *get_file_loc(char *path, char *file_name);
int slash_checker(const char *str);
char *get_file_path(char *file_name);
void handle_exit(char *cmd, char *args, int status);
void shell_exit(int status);
int handle_builtin_commands(char *cmd, char **args, int status);
char *read_input(void);
void handle_env(void);
char *_getenv(const char *name);

#endif
