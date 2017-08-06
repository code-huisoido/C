/****************************/
/*找出数组中最大的数或者最小的数*/
/*learner:dinghui            */
/****************************/

#include<iostream>
#include<stdlib.h>
using namespace std;

namespace dmath
{
	int getMaxOrMin(int *arr, int count, bool isMax)
	{
		int temp = arr[0];
		for(int i=1; i<count; i++)
		{
			if(isMax)
			{
				if(temp < arr[i])
				{
					temp = arr[i];
				}
			}
			else
			{
				if(temp > arr[i])
				{
					temp = arr[i];
				}
			}
		}
		return temp;
	}
}


int main(void)
{	
	bool x = false;
	int arr[5] = {3,1,6,30,10};
	cout << "按0为求最小数，1为最大数" << endl;
	cin >> x;
	
	cout << dmath::getMaxOrMin(arr, 5, x) << endl;

	system("pause");
	return 0;
}

