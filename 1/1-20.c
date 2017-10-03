#include <stdio.h>
#define MAXLINE 1000
#define TAB 8

char line[MAXLINE];
char printLine[MAXLINE];
int getLine(void);
void detab(int i);
void copyLine(void);

int main()
{
    int len;
    while ((len = getLine()) > 0) {
        copyLine();
        printf("%s", printLine);
    }
}

int getLine(void)
{
    int c, i;
    for (i = 0; (i < MAXLINE -1) && (c=getchar()) != EOF && c !='\n'; ++i) {
        if (c == '\t') {
            detab(i);
            i = i + (TAB - (i % TAB)) - 1;
        } else {
            line[i] = c;
        }
    }

    if (c == '\n') {
        line[i] = '\n';
        ++i;
    }
    line[i] = '\0';
    return i;
}

void detab(int i)
{
    int j, blankNums;
    blankNums = TAB - (i % TAB);
    j = 0;
    while (j < blankNums) {
        line[i+j] = ' ';
        ++j;
    }
}

void copyLine(void)
{
    int i;
    i = 0;
    while ((printLine[i] = line[i]) != '\0')
        ++i;
}