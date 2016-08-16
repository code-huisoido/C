#include<stdio.h>

main()
{
	/* //统计输入的字符数；版本1 
	long nc;

	nc = 0;
	while(getchar() != EOF)
		++nc;
	printf("%ld\n", nc);*/

	//统计输入的字符数；版本2
	double nc;
	for(nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}

