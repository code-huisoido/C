#include<stdio.h>
/* ��дһ��ͳ�ƿո��Ʊ���뻻�з������ĳ��� */
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
	printf("�ո�����%d, �Ʊ������%d, ��������%d", ns, nt, nl);
}