#include <stdio.h>

main()
{
    float fahr;
    printf("%s\n", "华氏温度转为摄氏温度");
    for (fahr = 300; fahr >= 0; fahr -= 20) {
        printf("%3.0f\t%6.1f\n", fahr, 5 * (fahr - 32) / 9);
    }
}
