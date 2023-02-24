#ifndef _SOYOYE_
#define _SOYOYE_

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int cl_to_file(int n, const char* filename, char** av);
int char_counter(int j, char **b);
int words_counter(char **c);


#endif
