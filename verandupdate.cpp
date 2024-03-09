#include <algorithm>
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include <vector>
#include <algorithm>
#include<graphics.h>
char win_result[30]="Last winner : Start Game ";
char username[30]="User-Guest01";
char name_user[30]="Shivam";

int main()
{
	int gd = DETECT, gm; 
	initgraph(&gd, &gm," "); 
	//initwindow(1540,795," Slider Ball Game In CPP ");
	
	initwindow(1540,795," Slider Ball Game In CPP ");
	setbkcolor(CYAN); 
	cleardevice(); 
	setbkcolor(CYAN);
		
		
		
	setcolor(WHITE);
	settextstyle(8, 0, 3);
	outtextxy(10, 18, win_result);
		
		
	//profile
	setcolor(WHITE);
	settextstyle(8, 0, 3);
	outtextxy(1343, 18, username);
		
	//creating an icon for Account
	circle(1310,29,17);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(1300,22,WHITE);
		
	//Welcome Message BY System	
	setcolor(WHITE);
	settextstyle(8, 0, 3);
	outtextxy(665, 19, "Welcome ");
	outtextxy(780, 19, name_user);
		
	//Create a Title for page 

	settextstyle(10, 0, 8);
	setcolor(WHITE); 
	outtextxy(610, 130," Version & Update ");
	
	
	
	
	getch();
	return 0;
	
}
