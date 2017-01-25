#include <stdio.h>
#include <stdlib.h> 
#include <conio.h>
#include <windows.h>

/**
 * control of an airplane and shot a target
 */
void main()
{
	int i,j;
	int x = 10;
	int y = 5;
	char input;
	int isFire = 0;
	
	int nx = 5;
	int isKilled = 0;
	
	int left = 0;
	int right = 10;
	int velocity_x = 1;
	
	int score = 0;
	int success = 0;
	
	while(1)
	{
		system("cls");
		if(!isKilled)
		{
			nx = nx + velocity_x;
			for(j=0;j<nx;j++)
				printf(" ");
			printf("+\n");
			
			if((nx == right) || (nx == left))
				velocity_x = -velocity_x;
		}
		
		//if hit the target successfully
		if(isFire == 0)
		{
			for(j=0;j<y;j++)
				printf("\n");
		}
		else
		{
			for(j=0;j<y;j++)
			{
				for(i=0;i<x;i++)
				{
					printf(" ");
				}
				printf("  |\n");
			}	
			if(x+2==nx)
			{
				score = score + 1;
				isKilled = 1;	
			}
			
			isFire = 0;
		}
		
		//The appearance of the plane
		for(i=0;i<x;i++)
			printf(" ");
		printf("  *\n");
		for(i=0;i<x;i++)
			printf(" ");
		printf("*****\n");
		for(i=0;i<x;i++)
			printf(" ");
		printf(" * * \n");
		
		printf("\n\n\n");
		printf("The coordinates of the plane:%d,%d", x,y);
		
		//control of the plane
		if(kbhit())
		{
			input = getch();
			if(input == 'a')
				x--;
			if(input == 'd')
				x++;
			if(input == 'w')
				y--;
			if(input == 's')
				y++;	
			if(input == ' ')
			    isFire = 1;
		}	
		printf("\nThe score:%d", score);
		if(score == 10)
		{	
			success = 1;
			break;
		}
	}
	
	if(success == 1)
	{
		system("cls");
		printf("victory!\n");
		Sleep(1000);	
	}
}