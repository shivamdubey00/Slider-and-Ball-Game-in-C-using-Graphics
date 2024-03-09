/*					       // @Slider and Ball Game using Computer Graphics in C++	*************************************************************************************************
	*	Submission on			---- Computer graphics project--- 				Team Leader			*
	*	 15 feb 2024			------------ 2023-2024 ----------				Shivam Dubey    	*
	*																								*
	*************************************************************************************************
						
									-------	Project Description ------- 
------------------------------------------------------------------------------------------------------
	
	Project Title : Slider and Ball Game using Computer Graphics in C++

	Description : This game is build using Graphics.h Header file in C/C++ Programming Language.






										@project_details_ends
*********************************************************************************************************



_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_

											CONTRIBUTER DETAILS
	------------------------------------------------------------------------------------------------------
	|	Sr.no	|		NAME		|	ROLL_NO 	 | 				LINKEDIN PROFILE 					  |
	|-----------|-------------------|----------------|----------------------------------------------------|
 	|	1)		|	Shivam Dubey	|	 4175		 |													  |
	| 	 		|					|				 |													  |
	******************************************************************************************************


 
						~ HEADERFILE USED DETAILS & DESCRIPTION 
 	---------------------------------------------------------------------------------------------				ANALYSIS OF PROGRAM
 	|	 SR.no  |	      NAME		|				DESCRIPTION									|	    	-------------------
 	|---------- |-------------------|-----------------------------------------------------------|	 			
 	|			|					|															|			   Header file : 6 	
 	|	 1.		| 	graphics.h		|	- This header file is used for including the Graphics	|
	| 			|					|	  Element in code 										|
 	|    2.		| 	conio.h			|	- this header file iti s used for closing graph													|	
	|			|					|															|
 	|    3.		| 	time.h			|	- for delay()														|
	| 			|					|															|
 	|	 4.		| 	stdlib.h		|	-	standard input and otput													|
	| 			|    				|															|
 	|	 5.		| 	vector			|	-	for drawing the balls													|
 	|	 		|					|															|
 	|	 6.		|	stdio.h			|	-	standard input output													|
 	---------------------------------------------------------------------------------------------



 */


//starting with Inlcuding the  Headerfiles
#include <algorithm> 
#include <conio.h> 
#include <graphics.h> 
#include <stdlib.h> 
#include <time.h> 
#include <vector> 
using namespace std;
vector<int> colors; 
//void balls();
int color_number=3;
char win_result[30]="Last winner : Start Game ";
char username[30]="User-Guest01";
char name_user[30]="Shivam";
int op;
int n;
void initial();
void setting();
void changemusic();
void aboutus(); // about us page 
void help(); // help Page 
void play(); // play function
void versionandupdate(); // last page of the checking the version 
void update_profile();
void changecolor(); // setting 2 
void start(int color); // used for start header menu mostly for color option 
int main()
{
	int exit=100;


	int input;
	
	
	printf("\n\t\t You want Go Home Menu ? 1-yes 2-no : ");
			scanf("%d",&input);
	changemusic();
			// asking for user if they wants to return home pahge or not 
		while(1)
		{
			
			
			
			if(input==1)
			{
				
				//closegraph();
				
				initial();
				
			}
			else{
				
			printf(" Wait Closing the Window ");
			delay(20);
			}
	}
	
	getch();
	return 0; 

}

void versionandupdate()
{
	int gd = DETECT, gm; 
	initgraph(&gd, &gm,NULL); 
	//initwindow(1540,795," Slider Ball Game In CPP ");
	
	initwindow(1540,795," Slider Ball Game In CPP ");
	//versionandupdate();
	//Create a Title for page 

	settextstyle(10, 0, 7);
	setcolor(WHITE); 
	outtextxy(400, 130," Version & Update ");
	
	
	settextstyle(10,0,4);
	setcolor(WHITE);
	outtextxy(250,240," Do Update the Application if the Updates are Available  ");
	setcolor(YELLOW);
	settextstyle(10,0,2);
	outtextxy(370,275," Be paitent While updating the Application it take a Minute to Update   ");
	
	
	
	// Giving the Model Name 
	
	// Question 1 Asked FQS
	settextstyle(10,0,5);
	setcolor(YELLOW);
	outtextxy(250,360,"\t Version : V 0.01");
	
	
	// for Updating :
	// Question 1 Asked FQS
	settextstyle(10,0,4);
	setcolor(YELLOW);
	outtextxy(250,450,"\t 1. To Check For Update ?");
	int in;
	printf("\n Enter 1 for Checking Updates : ");
	scanf("%d",&in);
	if(in==1)
	{
		printf("\n\t\t\t Wait we Checking for Update ");
		delay(50);
		printf("\n\t\t\t Establishing connection ");
		delay(50);
		//main display
		settextstyle(8,0,3);
		outtextxy(298,610,"Loading, Please Wait...");
		delay(120);
		outtextxy(298,610,"Establishing connection , Please Wait...");
		delay(120);
		setcolor(WHITE);
		for(int i=290;i<650;i++)
		{
		outtextxy(298,610,"AUTHENICATING , ");
		
		
		
			delay(30);
			line(i,650,i,680);
		outtextxy(298,610,"Establishing SECURE connection , Please Wait...");
		
		}
		setcolor(YELLOW);
		outtextxy(298,610,"Checking for New Update, Please Wait...");
		setcolor(BLACK);
		outtextxy(298,610,"No Updates are Available , You are Using Updated Version ");
		settextstyle(10,0,4);
		setcolor(WHITE);
		outtextxy(650,650," You are Up to date ! Thankyour for checking ");
		
	
		printf("\n\t\t\t Wait ckecing for network ");
		delay(10);
		printf("\n\t\t\t Done ");
		delay(10);
	
		
		
	}
	
	
	
}
void setting()
{
	int gd = DETECT, gm; 
	initgraph(&gd, &gm, NULL); 
		//initwindow(1540,795," Slider Ball Game In CPP ");
		
	initwindow(1540,795," Slider Ball Game In CPP ");
	start(color_number); //header part
		
	settextstyle(10, 0, 8);
	setcolor(WHITE); 
	outtextxy(550, 130," Setting ");
	
	
	
	settextstyle(8, 0, 3);
	setcolor(WHITE); 
	outtextxy(600,320,"1. View or Update Profile ");
	
	
	settextstyle(8, 0, 3);
	setcolor(WHITE); 
	outtextxy(600,390,"2. Change the Color ");
	
	
	settextstyle(8, 0, 3);
	setcolor(WHITE); 
	outtextxy(600,460,"3. Control Music ( Comming soon )");
	
	
	
	
	settextstyle(8, 0, 3);
	setcolor(WHITE); 
	outtextxy(600,530,"4. Modes ( comming soon )");
	
	

	
	
	int no;	//declare the variable to get the input from the user
	printf(" Select the Number to Change the setting ?");
	scanf("%d",&no);
	
		switch(no)
	{
		case 1:
				
		printf(" Opening the Window please Wait ");
		
		update_profile();
		//ask for closing 
		
		break;
		closegraph();
		case 2:
		printf(" Opening the Window please Wait ");
		
		changecolor();
		break;
		
		case 3:
			printf("\n Comming soon \n");
			break;
			
		case 4:
			printf("\n Comming soon \n");
			
			break;
			
			
		default:
			printf(" Opening the Window please Wait ");
		printf("Chainging the Window Color ");
		break;
	}
	
	
	
	
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



void play()
{
	// Initialize the graphics environment 
	int gd = DETECT, gm; 
	initgraph(&gd, &gm, NULL); 
	initwindow(1540,795," Slider Ball Game In CPP ");
	// Set the background color 
	setbkcolor(color_number); 
	// Define variables and constants for sliders, bars, 
	// colors, and scoring 
	int barWidth = 20; 
	int barHeight = 120; 
	int spaceBetweenBars = 50; 
	int minY = 50; 
	int maxY = getmaxy() - 50; 
	int barX = getmaxx() - 50 - barWidth; 

	srand(time(NULL)); 

	int yellowColor = YELLOW; 
	int cyanColor = BLACK; 
	int magentaColor = MAGENTA; 
	int otherColor = WHITE; 

	int redBarY = minY; 
	int greenBarY = minY + spaceBetweenBars; 
	int blueBarY = minY + 2 * spaceBetweenBars; 
	int redBarVelocity = 3; 
	int greenBarVelocity = 5; 
	int blueBarVelocity = 10; 

	int redColor = RED; 
	int greenColor = GREEN; 
	int blueColor = BLUE; 

	int scoreRed = 0; 
	int scoreGreen = 0; 
	int scoreBlue = 0; 

	int ballRadius = 10; 

	// Create arrays to store ball colors, positions, 
	// velocities, and directions 
	 
	for (int i = 0; i < 9; ++i) { 
		if (i < 2) 
			colors.push_back(redColor); 
		else if (i < 4) 
			colors.push_back(greenColor); 
		else if (i < 6) 
			colors.push_back(blueColor); 
		else if (i == 6) 
			colors.push_back(yellowColor); 
		else if (i == 7) 
			colors.push_back(cyanColor); 
		else if (i == 8) 
			colors.push_back(magentaColor); 
		else
			colors.push_back(otherColor); 
	} 

	vector<int> ballX; 
	for (int i = 0; i < colors.size(); ++i) { 
		ballX.push_back(rand() % (getmaxx() + ballRadius) 
						/ 2); 
	} 
	vector<int> ballY; 
	for (int i = 0; i < colors.size(); ++i) { 
		ballY.push_back(rand() 
							% (getmaxy() - ballRadius * 2) 
						+ ballRadius); 
	} 
	vector<int> ballVelocitiesX(colors.size(), 
								rand() % 5 + 5); 
	vector<int> ballVelocitiesY(colors.size(), 
								rand() % 5 + 5); 
	vector<int> ballDirectionsX(colors.size(), 1); 
	vector<int> ballDirectionsY(colors.size(), 1); 
	// Game loop 
	while (!kbhit()) { 
		clearviewport(); 
		// Update slider positions 
		redBarY += redBarVelocity; 
		greenBarY += greenBarVelocity; 
		blueBarY += blueBarVelocity; 

		if (redBarY <= minY 
			|| redBarY + barHeight >= maxY) { 
			redBarVelocity *= -1; 
		} 
		if (greenBarY <= minY 
			|| greenBarY + barHeight >= maxY) { 
			greenBarVelocity *= -1; 
		} 
		if (blueBarY <= minY 
			|| blueBarY + barHeight >= maxY) { 
			blueBarVelocity *= -1; 
		} 
		// Draw sliders 
		setcolor(redColor); 
		setfillstyle(SOLID_FILL, redColor); 
		bar(barX, redBarY, barX + barWidth, 
			redBarY + barHeight); 
		setcolor(greenColor); 
		setfillstyle(SOLID_FILL, greenColor); 
		bar(barX, greenBarY, barX + barWidth, 
			greenBarY + barHeight); 
		setcolor(blueColor); 
		setfillstyle(SOLID_FILL, blueColor); 
		bar(barX, blueBarY, barX + barWidth, 
			blueBarY + barHeight); 
		// Update ball positions 
		for (int i = 0; i < colors.size(); ++i) { 
			ballX[i] 
				+= ballVelocitiesX[i] * ballDirectionsX[i]; 
			if (ballX[i] >= barX - barWidth 
				|| ballX[i] - ballRadius <= 0) { 
				ballDirectionsX[i] *= -1; 

				if (ballX[i] - ballRadius > 0) { 
					setcolor(YELLOW); 
					circle(barX, ballY[i], 10); 
					int hitBarColor 
						= getpixel(barX + 10, ballY[i]); 
					// Handle ball-slider collisions and 
					// update scores 
					if (hitBarColor == colors[i] 
						&& colors[i] == RED) { 
						scoreRed += 4; 
					} 
					else if (hitBarColor == colors[i] 
							&& colors[i] == GREEN) { 
						scoreGreen += 4; 
					} 
					else if (hitBarColor == colors[i] 
							&& colors[i] == BLUE) { 
						scoreBlue += 4; 
					} 
					else if (hitBarColor && colors[i] 
							&& colors[i] != GREEN 
							&& colors[i] != RED 
							&& colors[i] != BLUE 
							&& hitBarColor == RED) { 
						scoreRed--; 
					} 
					else if (hitBarColor && colors[i] 
							&& colors[i] != GREEN 
							&& colors[i] != RED 
							&& colors[i] != BLUE 
							&& hitBarColor == GREEN) { 
						scoreGreen--; 
					} 
					else if (hitBarColor && colors[i] 
							&& colors[i] != GREEN 
							&& colors[i] != RED 
							&& colors[i] != BLUE 
							&& hitBarColor == BLUE) { 
						scoreBlue--; 
					} 
				} 
			} 

			ballY[i] 
				+= ballVelocitiesY[i] * ballDirectionsY[i]; 
			if (ballY[i] > getmaxy() - ballRadius - 5 
				|| ballY[i] <= ballRadius) { 
				ballDirectionsY[i] *= -1; 
			} 
			// Draw balls 
			setcolor(colors[i]); 
			setfillstyle(SOLID_FILL, colors[i]); 
			fillellipse(ballX[i], ballY[i], ballRadius, 
						ballRadius); 
		} 
		// Display scores 
		setcolor(WHITE); 
		const char* scoreText = "Score: "; 
		outtextxy(20, 40, const_cast<char*>(scoreText)); 

		char redScoreText[10], greenScoreText[10], 
			blueScoreText[10]; 
		sprintf(redScoreText, "Red: %d", scoreRed); 
		sprintf(greenScoreText, "Green: %d", scoreGreen); 
		sprintf(blueScoreText, "Blue: %d", scoreBlue); 

		outtextxy(70, 40, redScoreText); 
		outtextxy(120, 40, greenScoreText); 
		outtextxy(180, 40, blueScoreText); 
		// Check for a winner and exit the game if necessary 
		if (scoreRed >= 10 || scoreGreen >= 10 
			|| scoreBlue >= 10) { 
			clearviewport(); 
			setcolor(WHITE); 
			settextstyle(6, 0, 4); 
			const char* winners = "Congratulations"; 
			outtextxy(100, getmaxy() / 4, 
					const_cast<char*>(winners)); 
			delay(500); 
			if (scoreRed >= 10) { 
				const char* red_w = "RED is WINNER"; 
				outtextxy(100, getmaxy() / 2 + 30, 
						const_cast<char*>(red_w)); 
			} 
			if (scoreGreen >= 10) { 
				const char* green_w = "GREEN is WINNER"; 
				outtextxy(100, getmaxy() / 2 + 30, 
						const_cast<char*>(green_w)); 
			} 
			if (scoreBlue >= 10) { 
				const char* blue_w = "BLUE is WINNER"; 
				outtextxy(100, getmaxy() / 2 + 30, 
						const_cast<char*>(blue_w)); 
			} 
			const char* out = "Press any key to EXIT"; 
			outtextxy(100, getmaxy() / 2 + 200, 
					const_cast<char*>(out)); 
			break; 
		} 

		delay(10); 
	} 
	// Wait for a key press before closing the window 
	while (!kbhit()) { 
		delay(100); 
	} 
	
	
}


void aboutus()
{
	int gd = DETECT, gm; 
	initgraph(&gd, &gm, NULL); 

	// starting with the window 	
	initwindow(1540,795," Slider Ball Game In CPP ");
	start(color_number);
			
	// Header is close 
	
	
	// lets Started with The Body
	
	settextstyle(10, 0, 8);
	setcolor(WHITE); 
	outtextxy(550, 130," About Us ");
	//Title is defined
	delay(500);
	
	settextstyle(8,0,3);
	setcolor(WHITE);
	outtextxy(50,300," This Game is An Automated Game Which Show it Works Automatically with random Function when you  "); 
	
		delay(500);
	// second line 
	settextstyle(8,0,3);
	//setcolor(WHITE);
	outtextxy(50,350,"\n Click to Play button It will start and Ball will hit randomly to walls and the color which gets ");
	
		delay(500);
	//third line 
		settextstyle(8,0,3);
	//setcolor(WHITE);
	outtextxy(50,400,"\n more hitted will be declare as winner. This Game Generally This Game Generally For Entertaiment ");
	
		delay(500);
	//fourth Line 
	settextstyle(8,0,3);
	//setcolor(WHITE);
	outtextxy(50,450,"\n Purpose Only do Play And Guess !! ");
		delay(500);
	
	settextstyle(10,0,3);
	setcolor(WHITE);
	outtextxy(50,550,"\n  Current Version : V 0.01");
		delay(500);
	
	settextstyle(10,0,3);
	setcolor(WHITE);
	outtextxy(650,550,"\n File Type : .c++ ");
	
	settextstyle(10,0,3);
	setcolor(WHITE);
	outtextxy(1100,550,"\n Published on 27th Feb 2024 ");
	//end of paragraph
		delay(500);
	
	// creating line 
	setlinestyle(DOTTED_LINE,0,1);
	line(80,600,1450,600);
	
	
	
	// Lets Started With Module And Functions
	
	//About menus 
	settextstyle(5,0,4);
	setcolor(WHITE);
	outtextxy(600,650,"  About Developer ");
		delay(500);
	//DEVELOPER 1
	settextstyle(10,0,3);
	setcolor(WHITE);
	outtextxy(40,720,"\n 1. KRISHVANSHI KUMAR -(4132) ");
		delay(500);
	//DEVELOPER 2
	settextstyle(10,0,3);
	setcolor(WHITE);
	outtextxy(590,720,"\n 2. SHIVAM DUBEY -(4175) ");
		delay(500);
	//DEVELOPER
	settextstyle(10,0,3);
	setcolor(WHITE);
	outtextxy(1050,720,"\n3. DEVRAJ PANDEY -(4218) ");	
	
		delay(500);
	
	
}
//help page ()

void help()
{
	int gd = DETECT, gm; 
	initgraph(&gd, &gm, NULL); 
	//initwindow(1540,795," Slider Ball Game In CPP ");
	
	initwindow(1540,795," Slider Ball Game In CPP ");
	start(color_number);
		
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
	
	
		
	
	
	
	


}

void update_profile()
{
	
	int gd = DETECT, gm; 
	initgraph(&gd, &gm, NULL); 
		//initwindow(1540,795," Slider Ball Game In CPP ");
		
	initwindow(1540,795," Slider Ball Game In CPP ");
	setbkcolor(CYAN); 
	cleardevice(); 
	
	start(color_number);
	
// title showing 
	settextstyle(10, 0, 8);
	setcolor(WHITE); 
	outtextxy(260, 130,"View or Update Profile ");

// open the Main Body 
	
	
	setcolor(WHITE);
	settextstyle(8, 0, 4);
	outtextxy(260, 300, "1. Name: ");
	outtextxy(440, 300, name_user);
	
	//2nd option 
	
	setcolor(WHITE);
	settextstyle(8, 0, 4);
	outtextxy(260, 350, "2. Username: ");
	outtextxy(510, 350, username);



	// Asking for changing Name
	int options;
	setcolor(WHITE);
	settextstyle(8, 0, 5);
	outtextxy(260, 450, "Wants To Change the Name ?  ( 1-Yes 2 -No) ");
	printf("\n\n Do you want to Update You Name? ");
	scanf("%d",&options);	
	if(options==1)
	{
		printf(" Enter the name Here : ");
		scanf("%s",&name_user);
		// add the progress bar 
		
		settextstyle(10, 0, 4);
		outtextxy(298,610,"Loading, Please Wait...");
		printf("\nLoading, Please Wait...");
		delay(120);
		outtextxy(298,610,"Establishing Connection , Please Wait...");
		delay(120);
		setcolor(WHITE);
		settextstyle(8, 0, 4);
		for(int i=290;i<650;i++)
		{
		outtextxy(298,610,"UPDATING THE NAME ESTABLISHING CONNECTION ,PLEASE WAIT ... ");
		delay(30);
	
		outtextxy(298,610,"UPDATING THE NAME ESTABLISHING CONNECTION ,PLEASE WAIT ... ");
		delay(30);
			
		outtextxy(298,610,"CHAINGIN NAME WITH NEW NAME  ");	
			line(i,650,i,680);
		outtextxy(298,610,"Establishing SECURE Connection ");
		
		}
		
		setcolor(BLACK);
		settextstyle(8, 0, 3);
		outtextxy(80,610,"NAME UPDATED SUCCESSFULLY , JUST CLOSE THE CURRENT WINDOW TO SEE THE CHANGES .......... ");
		settextstyle(10,0,3);
		setcolor(WHITE);
		outtextxy(650,650," NAME IS UPDATED ! THANKYOU FOR UPDATING  ");
		
		//END OF THE pROGRESS BAR
		
		printf(" Your name Updated Successfully ");
	}
	else
	{
		printf("\n OK \n");
	}
	
	
	delay(50);
	//again ask for the Wants to change the user name ;
	settextstyle(10, 0, 5);
	setcolor(BLUE);
	outtextxy(260, 450, "Wants To Change the Username ?");
	
	printf("\n\n Do you want to Update Username? ( 1-Yes 2 -No)");
	scanf("%d",&options);	
	
	if(options==1)
	{
		printf("\n Enter the Username Here : ");
		scanf("%s",&username);
		
		//show prohress bar
		
		
		settextstyle(10, 0, 4);
		outtextxy(298,610,"Loading, Please Wait...");
		printf("\nLoading, Please Wait...");
		delay(120);
		outtextxy(298,610,"Establishing Connection , Please Wait...");
		delay(120);
		setcolor(WHITE);
		settextstyle(8, 0, 4);
		for(int i=290;i<650;i++)
		{
		outtextxy(80,610,"-------------> UPDATING THE NAME ESTABLISHING CONNECTION ,PLEASE WAIT ... ....");
		delay(30);
	
		outtextxy(80,610,"-------------> UPDATING THE NAME ESTABLISHING CONNECTION ,PLEASE WAIT ... .....");
		delay(30);
			
		outtextxy(298,610,"UPDATING NAME WITH NEW USERNAME 	");	
			line(i,650,i,680);
		outtextxy(298,610,"Establishing SECURE Connection ");
		
		}
		
		setcolor(BLACK);
		settextstyle(8, 0, 3);
		outtextxy(100,610,"USERNAME UPDATED SUCCESSFULLY , JUST CLOSE THE CURRENT WINDOW TO SEE THE CHANGES ........");
		settextstyle(10,0,3);
		setcolor(WHITE);
		outtextxy(650,650," USERNAME IS UPDATED ! THANKYOU FOR UPDATING  ");
		
		//END OF THE pROGRESS BAR
		
		
		
		
		//PROGRESS BAR ENDS HERE
		
		printf("\n Name Updated Successfully ");
	}
	else
	{
		printf("\n OK \n");
	}
	

	
	
}


void initial()
{
	//start
	
	
	int restart;
	int gd = DETECT, gm; 
	initgraph(&gd, &gm, NULL); 
	initwindow(1540,795," Slider Ball Game In CPP ");
	int op1;
	printf("Wants to Open App 1-Yes");
	scanf("%d",&restart);
		
	if(restart==1)
	{
	
		
		start(color_number);
		//Welcome Message BY System
		
		setcolor(WHITE);
		settextstyle(8, 0, 3);
		outtextxy(665, 19, "Welcome ");
		outtextxy(780, 19, name_user);
		
		
		//line(100, 300, 400, 300);
		
		
		delay(800);
	 	settextstyle(10, 0, 8);
		setcolor(WHITE); 
		const char* scoreText1 = "Slider and Ball Game in CPP  "; 
		outtextxy(145, 150, const_cast<char*>(scoreText1));
		delay(500);
		
		
		// making the text to deiplay the other graphs 
		settextstyle(5, 0, 4);
		outtextxy(540, 250, "A Computer Graphics Games");
		
		
		// Giving The Text Options to Switch 
		setcolor(WHITE);
		settextstyle(8, 0, 4);
		outtextxy(550, 400, " 1. Play ");
		delay(500);
		
		//2nd Option ABout Game 
		setcolor(WHITE);
		settextstyle(8, 0, 4);
		outtextxy(550, 450, "\n 2. About Game ");
		delay(500);
		
		
		//3rd Option 
		
		setcolor(WHITE);
		settextstyle(8, 0, 4);
		outtextxy(550, 500, "\n 3. Setting ");
		delay(500);
		
		
		//4th Option 
		
		setcolor(WHITE);
		settextstyle(8, 0, 4);
		outtextxy(550, 550, "\n 4. Help ");
		delay(500);
		
		// 5th Line 
		
		setcolor(WHITE);
		settextstyle(8, 0, 4);
		outtextxy(550, 600, "\n 5. Versions And Update ");
		delay(500);
	
		printf("Select the Option from menu ?");
	scanf("%d",&op);

	//taking to Switch case 
	switch(op)
	{
		
		case 1:
			closegraph();
			play();
			printf("\n Do you want to close Play  ? ( 1-yes 2-no )");
			scanf("%d",&n);
			if(n==1){
				
			closegraph();	
				
			}
			else
			{
			
				
			}
			break;
			
			break;
		
		case 2:
			
			closegraph();
			aboutus();
			printf("\n Do you want to close about us ? ( 1-yes 2-no ) : ");
			scanf("%d",&n);
			if(n==1){
				
			closegraph();	
				
			}
			else
			{
				printf(" \n\nThis Screen running in background \n\n");
				
			
			}
			
			break;
			
		case 3:
			closegraph();
			setting();
			printf("\n Do you want to close Setting ? ( 1-yes 2-no )");
			scanf("%d",&n);
			if(n==1){
				
			closegraph();	
				
			}
			else{
				
				printf("\n This Screen running in background \n");
				
			}
			
			
			
			break;
			break;
			
		case 4:
			
			printf("\nWelcome to Help Section \n if You find any difficulty Do contact us at Given Mail ID \n");
			//closegraph();
			help();
			printf("\n Do you want to close HELP  ? ( 1-yes 2-no )");
			scanf("%d",&n);
			if(n==1){
				
			closegraph();	
				
			}
			else{
				
				printf("\n This Screen running in background \n");
				
			}
			break;
		
		case 5:
		closegraph();	
		versionandupdate(); 
		printf("\n Do you want to close HELP  ? ( 1-yes 2-no )");
			scanf("%d",&n);
			if(n==1){
				
			closegraph();	
				
			}
			else{
				
				printf("\n This Screen running in background \n");
				
			}
			break;
		
			 
		default:
		
				
				printf("\n Something Went wrong , Given Vaild input only Try agaon !!\n");
				
		
			break;
	
	}
	
	
		
	
	}
	else{
	
				
				printf("\n Wait we are closing  \n");
				
		
		printf(" Wait Exiting ....");
		exit(0);
		
	}
	
	
	
	//end
}

void changecolor() //setting color 
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
	
	
	
}
void changemusic()
{
	 // Path to the MP3 file
    LPCWSTR filePath = L"D:\music.mp3";

    // Open the MP3 file with the default media player
    ShellExecuteW(NULL, L"open", filePath, NULL, NULL, SW_SHOWNORMAL);

	
}

