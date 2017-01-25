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
	high = 30;
	width = 20;
	position_y = high/2;
	position_x = width/2;
	
	bullet_y = -2;
	bullet_x = position_x;
	
	enemy_y = 0;
	enemy_x = position_x;
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
	printf("µÃ·Ö£º%d\n", score);
}

void updateWithoutInput()
{
	if(bullet_y > -1)
		bullet_y--;
	
	//bullet hit the enemy
	if((bullet_x==enemy_x) && (bullet_y==enemy_y))
	{
		score++;
		enemy_y = -1;
		enemy_x = rand()%width;
		bullet_y = -2;
	}
	//enemy fly over the window
	if(enemy_y > high)
	{
		enemy_y = -1;
		enemy_x = rand()%width;
	}
	
	static int speed = 0;
	if(speed < 20)
		speed++;
	if(speed == 20)
	{
		enemy_y++;
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
			position_x--;
		if(input == 'd')
			position_x++;
		if(input == 'w')
			position_y--;
		if(input == 's')
			position_y++;
		if(input == ' ')
		{
			bullet_y = position_y - 1;
			bullet_x = position_x;
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