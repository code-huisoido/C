#include <stdio.h>

main()
{
    int c, last_c;
    c = last_c = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            if (last_c != ' ' && last_c != '\t') {
                last_c = c;
                c = '\n';
                putchar(c);
            }
        } else {
            last_c = c;
            putchar(c);    
        }
    }
}