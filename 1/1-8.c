#include <stdio.h>

main()
{
    int c, space_count, t_count, n_count;

    c = space_count = t_count = n_count = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            space_count++;
        }
        if (c == '\t') {
            t_count++;
        }
        if (c == '\n') {
            n_count++;
        }
    }
    printf("空格:%d\n制表符:%d\n换行符:%d\n", space_count, t_count, n_count); 
}