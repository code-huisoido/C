#include<stdio.h>
/* 编写一个统计空格、制表符与换行符个数的程序 */
main()
{
	int ns = 0, nt = 0, nl = 0;
	int c;
	while((c = getchar()) != EOF){
		if(c == ' '){
			ns++;
		}
		if(c == '\t'){
			nt++;
		}
		if(c == '\n'){
			nl++;
		}
	}
	printf("空格数：%d, 制表符数：%d, 换行数：%d", ns, nt, nl);
}