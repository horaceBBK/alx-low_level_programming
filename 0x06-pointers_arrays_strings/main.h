#ifndef MAIN_H
#define MAIN_H

char *_memset(char *S, char b, unsigned int n);
int _putchar(char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
char * strpbrk(char *s, char *aacept);
char * strstr(char *haystack, char *needle):
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);


#endif
