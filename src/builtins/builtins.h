#ifndef BUILTINS_H
#define BUILTINS_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <grp.h>
#include <pwd.h>
#include <getopt.h>
#include <time.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include "../cmd/cmd.h"
#include "../cmd/shell.h"

typedef int (*pointer_function) (char**);

int sh_list_builtins(char** args);

/*Change directory in the shell.
args[0] is "cd", args[1] is the directory, 
If no directory is specified, change the current directory to HOME*/
int sh_cd(char** args);

//Always returns 0, to terminate execution.
int sh_exit(char** args);

int sh_pwd(char** args);

int sh_history(char** args);

int sh_echo(char** args);

int sh_cat(char** args);

int sh_mkdir(char** args);

int sh_ls(char** args);

int sh_rm(char** args);

extern const char* list_builtins[10];

extern const int sh_nb_builtins;

extern pointer_function builtins_func[10];

#endif