#ifndef _MAIN_H_
#define _MAIN_H_

void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *argstostr(int ac, char **av);
char *str_concat(char *s1, char *s2);
char **strtow(char *str);

#endif
