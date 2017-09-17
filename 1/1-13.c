#include <stdio.h>

main()
{
    //输入abc，打印abc长度：3
    //输入abc 123，显示每行一个单词并打印长度
    int c, last_c, word_length;
    c = last_c = word_length = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            if (last_c != ' ' && last_c != '\t') {
                last_c = c;
                printf(" 单词长度：%d\n", word_length);
                word_length = 0;
            }
        }
        else if (c == '\n' && last_c != ' ') {
            printf(" 单词长度：%d\n", word_length);
            word_length = 0;
        } 
        else {
            ++word_length;
            last_c = c;
            putchar(c);
        }
    }
}