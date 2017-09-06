#include <stdio.h>

main()
{   
    int c;
    if ((c = getchar()) != EOF) {
        printf("你输入的不是EOF，EOF在mac系统里为control+D\n");
    } else {
        printf("EOF的值:%d\n", c);    
    }
}