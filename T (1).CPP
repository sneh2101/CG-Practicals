#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	clrscr();
	int gd=DETECT,gm,i,X,n,j;
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	printf("ENTER N = ");
	scanf("%d",&n);
	X=90;
	for(j=0;j<n;j++)
	 {
	 for(i=0;i<280;i=i+10)
	 {
	cleardevice();
	setcolor(YELLOW);
	circle(X,100+i,20);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(X,100+i,YELLOW);
	setcolor(WHITE) ;
	line(0,400,600,400);
	delay(100);
	}
		 for(i=280;i>0;i=i-10)
	 {
	cleardevice();
	setcolor(YELLOW);
	circle(X,100+i,20);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(X,100+i,YELLOW);
	setcolor(WHITE) ;
	line(0,400,600,400);
	delay(100);
	 }
	 X=X+20;
	}

      cleardevice();

      getch();
      closegraph();

}