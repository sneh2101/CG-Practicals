#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int x=100;
void drawSnowman();
void main()
{
 int gd= DETECT, gm, i;
 initgraph(&gd, &gm, "C://TURBOC3//BGI");
 for(i=1; i<=20; i++)
 {
  drawSnowman();
  delay(800);
  cleardevice();
  x+=20;
 }
 getch();
 closegraph();
}

void drawSnowman()
{
 arc(x, 300, 118, 422, 40);
 arc(x, 255, 117, 423, 20);
 setfillstyle(SOLID_FILL, LIGHTGRAY);
 floodfill(x-30, 300, WHITE);
// floodfill(x-10, 255, WHITE);
 //hat
 line(x, 225, x-20, 238);
 line(x, 225, x+20, 238);
 line(x-20, 238, x+20, 238);
 setfillstyle(SOLID_FILL, GREEN);
 floodfill(x, 230, WHITE);
 //mouth
 line(x, 275, x-10, 265);
 line(x, 275, x+10, 265);
 line(x-10, 265, x+10, 265);
 setfillstyle(SOLID_FILL, RED);
 floodfill(x, 270, WHITE);
 //eyes
 circle(x-10, 255, 3);
 circle(x+10, 255, 3);
 //buttons
 circle(x, 285, 3);
 circle(x, 295, 3);
 circle(x, 305, 3);
 setfillstyle(SOLID_FILL, BLACK);
 floodfill(x, 285, WHITE);
 floodfill(x, 295, WHITE);
 floodfill(x, 305, WHITE);
 line(0, 340, 640, 340);
}