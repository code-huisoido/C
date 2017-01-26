#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

/**
 * global variable
 */
int position_x,position_y; //the coordinates of the airplane
int bullet_x,bullet_y; //the coordinates of the bullet
int enemy_x,enemy_y; //the coordinates of the enemy
int high,width; //the window of the game
int score; 

void gotoxy(int x, int y)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(handle, pos);
}

//data initialization
void startup()
{
	high = 20;
	width = 30;
	position_x = high/2;
	position_y = width/2;
	bullet_x = -2;
	bullet_y = position_y;
	enemy_x = 0;
	enemy_y = position_y;
	score = 0;
}

void show()
{
	//system("cls");	
	gotoxy(0,0);
	int i,j;
	for(i=0;i<high;i++)
	{
		for(j=0;j<width;j++)
		{
			if((i==position_x) && (j==position_y))
				printf("*"); //output airplane
			else if((i==enemy_x) && (j==enemy_y))
				printf("@"); //output enemy
			else if((i==bullet_x) && (j==bullet_y))
				printf("|"); //output bullet
			else
				printf(" "); //output blank
		}
		printf("\n");
	}
	printf("score£º%d\n", score);
}

void updateWithoutInput()
{
	if(bullet_x > -1)
		bullet_x--;
	
	//bullet hit the enemy
	if((bullet_x==enemy_x) && (bullet_y==enemy_y))
	{
		score++;
		enemy_x = -1;
		enemy_y = rand()%width;
		bullet_x = -2;
	}
	//enemy fly over the window
	if(enemy_x > high)
	{
		enemy_x = -1;
		enemy_y = rand()%width;
	}
	
	static int speed = 0;
	if(speed < 20)
		speed++;
	if(speed == 20)
	{
		enemy_x++;
		speed = 0;
	}
}

void updateWithInput()
{
	char input;
	if(kbhit())
	{
		input = getch();
		if(input == 'a')
			position_y--;
		if(input == 'd')
			position_y++;
		if(input == 'w')
			position_x--;
		if(input == 's')
			position_x++;
		if(input == ' ')
		{
			bullet_x = position_x - 1;
			bullet_y = position_y;
		}
	}
}

void HideCursor()
{
	CONSOLE_CURSOR_INFO cursor_info = {1, 1};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

void main()
{	
	HideCursor();
	startup();
	while(1)
	{
		show();
		updateWithoutInput();
		updateWithInput();
		
	}
}