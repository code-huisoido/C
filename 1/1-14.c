#include <stdio.h>

main()
{
    int c, i, arr[128];
    for (i = 0; i < 128; i++) {
        arr[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        ++arr[c];
    }

    for (i = 0; i < 128; i++) {
        printf("%c频度:%d\n", i, arr[i]);
    }
}