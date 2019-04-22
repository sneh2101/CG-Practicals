 #include<stdio.h>
 #include<conio.h>
 #include<graphics.h>
 #include<dos.h>

 int main()
 {
	int gd=DETECT,gm;
	int i,j;
	int arr[]={500,20,490,50,460,50,490,70,470,100,500,80,530,100,510,70,540,50,510,50,500,20};
	int arr1[]={410,20,400,50,370,50,400,70,380,100,410,80,440,100,420,70,450,50,420,50,410,20};
	initgraph(&gd,&gm,"C://TURBOC3//BGI");

	for(i=1;i<=6;i++)
	{
	if(i%2==0)
	{
	drawpoly(11,arr);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(495,50,WHITE);
	drawpoly(11,arr1);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(405,50,WHITE);
	line(70,320,70,280);
	line(90,320,90,280);
	line(70,320,90,320);
	line(70,280,90,280);
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(80,300,WHITE);
	//
	line(30,280,70,280);
	line(130,280,90,280);
	line(30,280,70,240);
	line(130,280,90,240);
	line(70,240,30,240);
	line(90,240,130,240);
	line(30,240,70,200);
	line(130,240,90,200);
	line(70,200,30,200);
	line(90,200,130,200);
	line(30,200,80,160);
	line(130,200,80,160);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(80,220,WHITE);
	//
	circle(80,150,10);
	setfillstyle(SOLID_FILL,RED);
	floodfill(80,150,WHITE);
      getch();
	cleardevice();
	continue;
	}
	else
	{
		line(70,320,70,280);
	line(90,320,90,280);
	line(70,320,90,320);
	line(70,280,90,280);
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(80,300,WHITE);
	//
	line(30,280,70,280);
	line(130,280,90,280);
	line(30,280,70,240);
	line(130,280,90,240);
	line(70,240,30,240);
	line(90,240,130,240);
	line(30,240,70,200);
	line(130,240,90,200);
	line(70,200,30,200);
	line(90,200,130,200);
	line(30,200,80,160);
	line(130,200,80,160);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(80,220,WHITE);
	//
	circle(80,150,10);
	setfillstyle(SOLID_FILL,RED);
	floodfill(80,150,WHITE);
	getch();

	continue;

	}
	}

	getch();
	closegraph();
	return 0;
 }
