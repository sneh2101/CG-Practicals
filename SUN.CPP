#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int main()
{
	int gd = DETECT,gm;
	int i=0;
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	printf("GOOD MORNING BITCHES\n");
	delay(1100);
	printf("YOU READY FOR THE FKIN SUN TO RISE THE FUCK UP?!!\n");
	delay(1100);

	for(i=0;i<=400;i+=10)
	{
		circle(320,350-i,30);
		setfillstyle(SOLID_FILL,YELLOW);
		floodfill(320,350-i,WHITE);
		delay(300);
		cleardevice();
	}
	getch();
	closegraph();
	return 0;
}

