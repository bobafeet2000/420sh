#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <err.h>
#include "cmd.h"
#include "../builtins/builtins.h"
#include <unistd.h>

#define HOST_NAME_MAX 64
#define USER_NAME_MAX 32

typedef struct shell{
    char* name;
    char oldpwd[4096];
    char pwd[4096];
    char exe_pwd[4096];
    int color;
    History* history;
    char* prompt;
    char username[USER_NAME_MAX + 1];
    char hostname[HOST_NAME_MAX + 1];
} shell;

extern shell* current;

void shell_init(void);

void shell_destroy(void);

void set_prompt(void);

#endif