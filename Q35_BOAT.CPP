#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

#define MAX 100
int main()
{
	int gd = DETECT,gm;
	int i;


	initgraph(&gd,&gm,"C://TURBOC3//BGI");
		line(0,220,640,220);
	line(320,0,320,480);
	for(i=0;i<=640;i+=20)
	{
	line(0+i,300,200+i,300);
	arc(100+i,300,180,360,100);
	setfillstyle(SOLID_FILL,RED);
	floodfill(10+i,340,WHITE);

	line(50+i,300,100+i,240);
	line(150+i,300,100+i,240);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(100+i,270,WHITE);
	//
		line(0,400,640,400);
       setfillstyle(SOLID_FILL,BLUE);
	floodfill(320,440,WHITE);

	delay(300);
	cleardevice();
	}

	getch();
	closegraph();
	return 0;
}
