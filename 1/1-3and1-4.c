#include <stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("%s\t%s\n", "摄氏温度", "华氏温度");
    while (celsius <= upper) {
        fahr = celsius * 9 / 5 + 32;
        printf("%8.0f\t%8.0f\n", celsius, fahr);
        celsius += step;
    }
}