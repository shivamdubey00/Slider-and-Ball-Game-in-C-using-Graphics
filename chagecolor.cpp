#include <algorithm> 
#include <conio.h>
#include <graphics.h> 
#include <stdlib.h> 
#include <time.h>
#include <vector>
#include<windows.h>
void changemusic();
void Balls();
int color_number=3;
char win_result[30]="Last winner : Start Game";
char username[30]="User-Guest01";
char name_user[30]="Yash";
void start(int color); // used for start header menu mostly for color option 
int main()
{
	int gd = DETECT, gm; 
	initgraph(&gd, &gm, NULL); 
	//initwindow(1540,795," Slider Ball Game In CPP ");
	initwindow(1540,795," Slider Ball Game In CPP ");
	
	start(color_number);
	// open the Main Body 
	
	// title showing 
	settextstyle(10, 0, 7);
	setcolor(WHITE); 
	outtextxy(210, 130,"Change the background color");
	
	
	// ASK ON GRAPHICS 
	
	
	
		
	setcolor(WHITE);
	settextstyle(8, 0, 4);
	outtextxy(260, 500, "WANTS TO CHANGE THE COLOR ?");
	int wants; // local variable 
	

	
	// ginig the option 
	
	setcolor(WHITE);
	settextstyle(8, 0, 4);
	outtextxy(260, 300, "1. Default color : ");		
	circle(685,313,17);
	setfillstyle(SOLID_FILL,color_number); //DEA\FAALT COLOR
	floodfill(1300,22,WHITE);
	
	
	//SECOND COLOR OPTION
	setcolor(WHITE);
	settextstyle(10, 0, 4);
	setcolor(4);
	outtextxy(260, 350, "2. RED : ");		
	circle(685,363,17);
	setfillstyle(SOLID_FILL,WHITE); //DEA\FAALT COLOR
	floodfill(1300,22,WHITE);
	
	// Third color
	setcolor(WHITE);
	settextstyle(10, 0, 4);
	setcolor(0);
	outtextxy(260, 400, "3. Black : ");		
	circle(685,413,17);
	setfillstyle(SOLID_FILL,WHITE); //DEA\FAALT COLOR
	floodfill(1300,22,WHITE);
	
	// now get the code for color 
	printf(" \nDo you want change the Color of Background ( 1- Yes , 2- No)?\n");
	scanf("%d",&wants);
	if(wants==1)
	{
	
	int cn;
	printf(" Enter the Color Number to apply on background \n\n 1. Default \n 2. Red \n 3. Balck \n :");
	scanf("%d",&cn);
	
	if(cn==1)
	{
	settextstyle(10, 0, 4);
	setcolor(WHITE);
	outtextxy(260, 550, "You had Select Default Color ");
	printf(" You had Select Default Color ");	
	
	
		
	}
	else if(cn==2)
	{
		
	settextstyle(10, 0, 4);
	setcolor(4);
	outtextxy(260, 550, "You had Select RED Color ");
	color_number=4;
	printf(" You had Select RED Color ");	
	
		
		
	}
	else if(cn==3)
	{
	settextstyle(10, 0, 4);
	setcolor(0);
	outtextxy(260, 550, "You had Select BLACK Color ");
	color_number=0;
	printf(" You had Select BLACK Color ");	
	
	//LETS CHANGE COLOR:
	
	
	
}
	}
	
	getch();
	return 0;
	
}
void start(int color)
{
setbkcolor(color); 
	cleardevice(); 
	setbkcolor(color);
		
		
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
	
	
	

	
}
