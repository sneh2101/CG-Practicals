#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<math.h>
void red();
void yellow();
void green();
void main()
{
	int gd=DETECT,gm,x,y,theta,i,flag;
	
	clrscr();
	initgraph(&gd,&gm,"C:/TURBOC3/BGI");
	
	//setcolor(RED);
	 setcolor(DARKGRAY);
     setfillstyle(SOLID_FILL, DARKGRAY);
     rectangle(150,150,450,450);
    floodfill(151,151,DARKGRAY);
     
     while(!kbhit())
     {
     	red();
     	yellow();
     	green();
	}
    
	



	getch();
	closegraph();

}

void red()
{
	setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
     circle(300,200,30);
	floodfill(300,200,RED);

	delay(500);

	setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL, DARKGRAY);
     circle(300,200,30);
	floodfill(300,200,DARKGRAY);

}

void yellow()
{
	setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
     circle(300,300,30);
	floodfill(300,300,YELLOW);
	

	delay(500);
	setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL, DARKGRAY);
     circle(300,300,30);
	floodfill(300,300,DARKGRAY);
	
}

void green()
{
		setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
     circle(300,400,30);
	floodfill(300,400,GREEN);
	delay(500);
	setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL, DARKGRAY);
     circle(300,400,30);