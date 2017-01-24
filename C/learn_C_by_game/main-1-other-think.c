#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main()
{
	int i,j;
	int x = 0;
	int y = 0;
	
	int top = 0;
	int bottom = 10;
	int left = 0;
	int right = 20;
	int velocity_x = 1;
	int velocity_y = 1;
	int origin_width = 20;
	int origin_high = 10;
	int high = 10;
	
	while(1)
	{
		x = x + velocity_x;
		y = y + velocity_y;
		system("cls");
		for(i=0;i<x;i++)
			printf("\n");	
		for(j=0;j<y;j++)
			printf(" ");
		printf("o");
		printf("\n");
		Sleep(300);
		if((y == (origin_width/2)) && (velocity_y < 0))
		{
			high = high/2;
			left = origin_high - high;
			top = top + high;
		}
		if((y == (origin_width/2)) && (velocity_y > 0))
		{
			high = high/2;
			right = right - (origin_high - high);
			top = top + high;
		}
		
		if((x==bottom) || (x==top))
		{
			velocity_x = -velocity_x;
		}
		
		if((y==right) || (y==left))
		{	
			velocity_y = -velocity_y;
		}
		
	}
}