#include<stdio.h>

/*当fahr=0, 20, ..., 300时，分别打印华氏温度与摄氏温度对照表*/
main()
{
	float fahr, celsius;
	int lower, upper, step;
	printf("摄氏温度与华氏温度对照表\n");
	//lower = 0;		/*	温度表的下限	*/
	//upper = 300;	/*  温度表的上限	*/
	//step = 20;		/*  步长			*/
	//fahr = lower;

	//while(fahr <= upper){
	//	celsius = (5.0/9.0) * (fahr-32.0);
	//	printf("%3.0f %10.2f\n", fahr, celsius);
	//	fahr = fahr + step;
	//}

	lower = 0;
	upper = 300;
	step = 20;
	celsius = lower;
	
	while(celsius <= upper){
		fahr = (celsius * 9.0 / 5.0) + 32.0;
		printf("%3.0f %10.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}

