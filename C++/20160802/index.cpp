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
		cout << "变量x是奇数" << endl;
	}
	else
	{
		cout << "变量x是偶数" << endl;
	}
	system("pause");
	return 0;
}