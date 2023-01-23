#include <stdio.h>
#include <stdlib.h>
#include "shell.h"

void print_prompt1(void)
{   
    char *path = getenv("PWD"), *log = getenv("LOGNAME"), *user = getenv("USER");
    fprintf(stderr, "\033[1;31m%s@%s\033[0m:\033[1;34m~%s\033[0m$ ",log, user, path);
}

void print_prompt2(void)
{
    fprintf(stderr, "> ");
}