#include<iostream>
#include<stdlib.h>
using namespace std;
namespace myNum
{
	int x = 105;
}

int main(void)
{
	bool isFlag = false;
	if(myNum::x % 2 == 0)
	{
		isFlag = false;
	}else
	{
		isFlag = true;
	}
	if(isFlag == true)
	{
		cout << "����x������" << endl;
	}
	else
	{
		cout << "����x��ż��" << endl;
	}
	system("pause");
	return 0;
}