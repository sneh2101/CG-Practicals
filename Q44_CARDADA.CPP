#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int main()
{
	int gd = DETECT,gm;
	int i=0;

	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	for(i=0;i<=480;i+=10)
	{
	rectangle(0+i,260,200+i,340);
	//color for main body
	setfillstyle(SOLID_FILL, RED);
	floodfill(i+1, 280, WHITE);
	circle(50+i,360,20);
	circle(150+i,360,20);
	//tyres are black by default so f that
	rectangle(40+i,210,160+i,260);
	//color for upar wala rect
	setfillstyle(SOLID_FILL, GREEN);
	floodfill(i+41, 230, WHITE);
	rectangle(60+i,210,100+i,240);
	rectangle(100+i,210,140+i,240);
	//color for windows
	setfillstyle(SOLID_FILL, WHITE);
	floodfill(i+70, 230, WHITE);
	floodfill(i+120, 230, WHITE);
	line(0, 380, 640, 380);//added this line for road.
	//Cars can't fly Dada!!!!
	delay(1000);
	cleardevice(); //use cleardevice instead of clrscr so the background
	//can remain black instead of white
	}
	getch();
	closegraph();
	return 0;
}