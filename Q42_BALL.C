#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<math.h>

void main()
{
	int gd=DETECT,gm,x,y,theta,i,flag;
	flag = 0;
	clrscr();
	initgraph(&gd,&gm,"C:/TURBOC3/BGI");
	i =0;
	x =y=0; 
	//setcolor(RED);
	
	 while(x<getmaxx()&&!kbhit())
	 {
	 	setfillstyle(SOLID_FILL,RED);
	 	pieslice(x,y,0,360,12);

	 	
			x  = x+1;
	 		
	 	

	 	if(flag)
	 	{
	 		y = y -10;
	 	}
	 	else 
	 	{
	 		y = y+10;

	 	}
	 	if(y>=getmaxy())
	 	{
	 		flag = 1;
	 	}
	 	else if(y<=0)
	 		flag = 0;
	 	delay(50);
	 	cleardevice();
	 	


	 }
	getch();
	closegraph();

}
