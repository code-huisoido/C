#include<stdio.h>

/*��fahr=0, 20, ..., 300ʱ���ֱ��ӡ�����¶��������¶ȶ��ձ�*/
main()
{
	float fahr, celsius;
	int lower, upper, step;
	printf("�����¶��뻪���¶ȶ��ձ�\n");
	//lower = 0;		/*	�¶ȱ������	*/
	//upper = 300;	/*  �¶ȱ������	*/
	//step = 20;		/*  ����			*/
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

