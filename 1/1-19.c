#include <stdio.h>
#define MAXLINE 1000

void reverse(char to[], int length, char from[]);
 
main()
{
    int c, i;
    char s[MAXLINE];
    char rs[MAXLINE];
    for (i = 0; (i < MAXLINE - 1) && (c = getchar()) != EOF && (c != '\n'); i++) {
        s[i] = c;
    }

    if (c == '\n') {
        reverse(rs, i, s);
        printf("%s\n", rs);
    }
    
}

void reverse(char to[], int length, char from[])
{
    int i;
    for (i = 0; i < length; i++) {
        to[i] = from[length-i-1]; 
    }
}