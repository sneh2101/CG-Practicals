#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd=DETECT,gm,i,j;
 clrscr();
 initgraph(&gd,&gm,"//bgi");
 for(j=0;j<600;j++)
 {
 for(i=0;i<10;i++)
 {
 setcolor(i);
 line(100+j,200+i,230+j,200+i);
 }
for(i=5;i>0;i--)
{
 arc(100+j,205,90,280,i);
 arc(230+j,205,280,90,i);
 }
 circle(238+j,205,4);
 putpixel(240+j,205,GREEN);
delay(5);
cleardevice();
}

 getch();
 closegraph();
 }
