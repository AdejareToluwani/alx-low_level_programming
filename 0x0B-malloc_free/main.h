#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int _putchar(char);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
#endif /* MAIN_H */
