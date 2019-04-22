#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm;
	int i;
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	for(i=0;i<40;i++)
	{
		rectangle(200-i,200-i,300+i,300+i);
		delay(200);
		cleardevice();
	}
	getch();
	closegraph();
}