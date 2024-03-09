#include <algorithm> 
#include <conio.h> 
#include <graphics.h> 
#include <stdlib.h> 
#include <time.h> 
#include <vector> 
char win_result[30]="Last winner : Start Game ";
char username[30]="User-Guest01";
char name_user[30]="Shivam";
int main()
{
	int gd = DETECT, gm; 
	initgraph(&gd, &gm, NULL); 

	// starting with the window 	
	initwindow(1540,795," Slider Ball Game In CPP ");
	setbkcolor(CYAN);
	cleardevice(); 
	
	
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
			
	// Header is close 
	
	
	// lets Started with The Body
	
	settextstyle(10, 0, 8);
	setcolor(WHITE); 
	outtextxy(550, 130," About Us ");
	//Title is defined
	
	
	settextstyle(8,0,3);
	setcolor(WHITE);

	
	outtextxy(50,300," This Game is An Automated Game Which Show it Works Automatically with random Function when you  "); 
	
	
	// second line 
	settextstyle(8,0,3);
	//setcolor(WHITE);
	outtextxy(50,350,"\n Click to Play button It will start and Ball will hit randomly to walls and the color which gets ");
	
	
	//third line 
		settextstyle(8,0,3);
	//setcolor(WHITE);
	outtextxy(50,400,"\n more hitted will be declare as winner. This Game Generally This Game Generally For Entertaiment ");
	
	
	//fourth Line 
	settextstyle(8,0,3);
	//setcolor(WHITE);
	outtextxy(50,450,"\n Purpose Only do Play And Guess !! ");
	
	
	settextstyle(10,0,3);
	setcolor(WHITE);
	outtextxy(50,550,"\n  Current Version : V 0.01");
	
	
	settextstyle(10,0,3);
	setcolor(WHITE);
	outtextxy(650,550,"\n File Type : .c++ ");
	
	settextstyle(10,0,3);
	setcolor(WHITE);
	outtextxy(1100,550,"\n Published on 27th Feb 2024 ");
	//end of paragraph
	
	
	// creating line 
	setlinestyle(DOTTED_LINE,0,1);
	line(80,600,1450,600);
	
	
	
	// Lets Started With Module And Functions
	
	//About menus 
	settextstyle(5,0,4);
	setcolor(WHITE);
	outtextxy(600,650,"  About Developer ");
	
	//DEVELOPER 1
	settextstyle(10,0,3);
	setcolor(WHITE);
	outtextxy(40,720,"\n 1. SHIVAM DUBEY -(4175) ");
	
	//DEVELOPER 2
	settextstyle(10,0,3);
	setcolor(WHITE);
	outtextxy(590,720,"\n 2. DEVRAJ PANDEY	-(4138) ");
	
	//DEVELOPER
	settextstyle(10,0,3);
	setcolor(WHITE);
	outtextxy(1050,720,"\n3. KRISHNAVANSHI GUPTA -(4218) ");

	
	getch();
	return 0;
}
