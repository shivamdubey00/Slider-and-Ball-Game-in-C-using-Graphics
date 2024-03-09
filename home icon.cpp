//Home Icon creating 
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<vector>
int main()
{
	int gd = DETECT, gm; 
	initgraph(&gd, &gm, NULL); 
	
	initwindow(900,900," Slider Ball Game In CPP ");
	cleardevice();
	
	setcolor(WHITE);
	arc(210,100,10,10,25);
	arc(210,100,10,10,25);
	
	
	
	getch();
	closegraph();
	return 0;
}

