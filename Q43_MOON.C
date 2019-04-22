#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int y=260;
void drawMoon();
void main()
{
 int gd= DETECT, gm, i, j, k=1;
 initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
 for(i=1; i<=13; i++)
 {
  drawMoon();
  for(j=1; j<=240; j+=5)
  {
   k=1;
   while(k<=640)
   {
    putpixel(k, j, WHITE);
    k+=5;
   }
  }
  delay(800);
  cleardevice();
  y-=20;
 }
 getch();
 closegraph();
}
void drawMoon()
{
 line(0, 240, 640, 240);
 circle(320, y, 20);
 setfillstyle(SOLID_FILL, WHITE);
 floodfill(320, y, WHITE);
}