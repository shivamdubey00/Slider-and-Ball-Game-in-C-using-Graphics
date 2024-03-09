#include <algorithm> 
#include <conio.h>
#include <graphics.h> 
#include <stdlib.h> 
#include <time.h>
#include <vector>

void changemusic();
void Balls();
char win_result[30]="Last winner : Start Game";
char username[30]="User-Guest01";
char name_user[30]="Guest";
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
	
	getch();
	return 0;
}
