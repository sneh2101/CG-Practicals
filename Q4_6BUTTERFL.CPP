#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int main()
{
	int gd = DETECT, gm;
       int i=0,j;
	initgraph(&gd,&gm,"C://TURBOC3//BGI");

	for(j=0;j<10;j++)
	{
	for(i=0;i<=50;i+=50)
	{
	ellipse(320,240,0,360,20,120);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(320,240,WHITE);
	circle(320,100,20);
	line(315,80,300,50);

	line(325,80,340,50);
	line(335,160,530+i,120);
	line(335,320,530+i,360);
	arc(530+i,180,270,90,60);
	arc(530+i,300,270,90,60);
	setfillstyle(SOLID_FILL,RED);
	floodfill(405+i,240,WHITE);
	circle(405,240,40);
	setfillstyle(SOLID_FILL,MAGENTA);
	floodfill(405,240,WHITE);

	line(305,160,110-i,120);
	line(305,320,110-i,360);
	arc(110-i,180,90,270,60);
	arc(110-i,300,90,270,60);
	setfillstyle(SOLID_FILL,RED);
	floodfill(240-i,240,WHITE);
	circle(240,240,40);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(240,240,WHITE);

	delay(300);
	cleardevice();
	}
	}
	getch();
	closegraph();
	return 0;
}