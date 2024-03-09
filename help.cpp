#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include <vector>
#include <algorithm>
char win_result[30]="Last winner : Start Game ";
char username[30]="User-Guest01";
char name_user[30]="Shivam";

int main()
{
	int gd = DETECT, gm; 
	initgraph(&gd, &gm, NULL); 
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
		
//Create a Title 

	settextstyle(10, 0, 8);
	setcolor(WHITE); 
	outtextxy(610, 130," Help ");		
				
	// now creating the body 
	
	
	settextstyle(10,0,4);
	setcolor(WHITE);
	outtextxy(30,240,"Follow If You Stuck at Any Point while Using The App Frequently Asked Question ");
	setcolor(YELLOW);
	settextstyle(10,0,2);
	outtextxy(425,275,"Most Frequently Asked By user if You Find New send Us on mail Id  ");
	
	// Question 1 Asked FQS
	settextstyle(10,0,3);
	setcolor(YELLOW);
	outtextxy(20,350,"\t Q1. Does This game Operates Automatically ?");
	
	//Answer the Question
	settextstyle(8,0,3);
	setcolor(WHITE);
	outtextxy(20,375," Ans: It Operates Automatically and it is Based on random Functions & Decide Randomly, it is for Fun. ");
	
	
	
	
	//Second Question 
	settextstyle(10,0,3);
	setcolor(YELLOW);
	outtextxy(20,420,"\t Q2. It Created using Which Language ?");
	
	//Answer the Question
	settextstyle(8,0,3);
	setcolor(WHITE);
	outtextxy(20,445," Ans: It is Created In C++ Programming language and Using Graphic Header File . ");
	
	
	
	//Third Question 
	settextstyle(10,0,3);
	setcolor(YELLOW);
	outtextxy(20,489,"\t Q3. Can we Change Our Name and Username ?");
	
	//Answer the Question
	settextstyle(8,0,3);
	setcolor(WHITE);
	outtextxy(20,518," Ans: Yes, You can Change Both Go to Settings > Change Name  Change Your both Names. ");
	
	
	
	
	//Fourth Question 
	settextstyle(10,0,3);
	setcolor(YELLOW);
	outtextxy(20,562,"\t Q4. Can We Change the Background Mode of Entire Game ?");
	
	//Answer the Question
	settextstyle(8,0,3);
	setcolor(WHITE);
	outtextxy(20,587," Ans: Yes, You can Change The Background Color of the Entire Game. ");
	
	
	
	
	//fifth Question 
	settextstyle(10,0,3);
	setcolor(YELLOW);
	outtextxy(20,631,"\t Q5. Can We Update the Game?");
	
	//Answer the Question
	settextstyle(8,0,3); // difference is 44 from one q1 to q2 
	setcolor(WHITE);
	outtextxy(20,656," Ans: Yes, You can Update Game also See the Version of Game  ");
	
	
	
	// Sixth Question
	settextstyle(10,0,3);
	setcolor(YELLOW);
	outtextxy(20,700,"\t Q5. Can We Directly Reach To Developers if we find Bug ?");
	
	//Answer the Question
	settextstyle(8,0,3); // difference is 44 from one q1 to q2 
	setcolor(WHITE);
	outtextxy(20,725," Ans: Yes, You can Contact us at developersend@infromus.com ");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
