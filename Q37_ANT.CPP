#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

int main()
{
	int gd= DETECT, gm;
       int i=0;
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	for(i=0;i<=640;i+=20)
	{

	circle(50+i,220,30);
	setfillstyle(SOLID_FILL,RED);
	floodfill(55+i,220,WHITE) ;
	circle(110+i,220,30);
	setfillstyle(SOLID_FILL,RED);
	floodfill(111+i,220,WHITE) ;
	circle(125+i,200,5);
	//
	line(125+i,192,155+i,175);
	line(125+i,192,125+i,150);
	//
	line(50+i,250,20+i,275);
	line(50+i,250,80+i,275);
	line(111+i,250,82+i,275);
	line(111+i,250,140+i,275);
	delay(300);
	cleardevice();
	}
	getch();
	closegraph();
	return 0;
}
