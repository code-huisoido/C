#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/**
 * 控制小球来回弹跳
 *
 */
void main()
{
	int i,j;
	int x = 5;
	int y = 5;
	
	int top = 5;
	int bottom = 20;
	int left = 5;
	int right = 35;
	int velocity_x = 1;
	int velocity_y = 1;
	
	while(1)
	{
		x = x + velocity_x;
		y = y + velocity_y;
		//ÇåÆÁº¯Êý 
		system("cls");
		
		//Êä³öÐ¡ÇòÉÏÃæµÄ¿ÕÐÐ
		for(i=0;i<x;i++)
			printf("\n");	
		//Êä³öÐ¡Çò×ó±ßµÄ¿Õ¸ñ
		for(j=0;j<y;j++)
			printf(" ");
		//Êä³öÐ¡Çòo 
		printf("o");
		printf("\n");
		//µÈ´ýÈô¸ÉºÁÃë 
		//Sleep(50);
		
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