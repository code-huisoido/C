#include <stdio.h>

main()
{
    int c, last_c;
    c = last_c = 0;

    //因书本上还没讲到continue，所以用这种方法实现
    while ((c = getchar()) != EOF) 
    {
        if (c != ' ')
        {
            last_c = c;
            putchar(c);
        }
        if (c == ' ')
        {
            if (last_c == ' ')
                ;
            if (last_c != ' ')
            {
                last_c = c;
                putchar(c);
            }

        }
    }
}