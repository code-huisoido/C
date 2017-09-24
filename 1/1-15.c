#include <stdio.h>

void fahr2celsius(int lower, int upper, int step);

main()
{
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr2celsius(lower, upper, step);
}


void fahr2celsius(int lower, int upper, int step)
{
    float fahr, celsius;
    fahr = 0;

    if (lower > upper) 
        printf("最低温度不能高于最高温度！");

    if (step < 0)
        printf("间隔温度不能低于0!");

    printf("%s\t%s\n", "华氏温度", "摄氏温度");
    while (fahr <= upper) {
        printf("%6.0f\t%12.0f\n", fahr, 5 * (fahr - 32) / 9);
        fahr = fahr + step;
    }
}
