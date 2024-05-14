# include<iostream>
# include<graphics.h>
# include<conio.h>
# include<stdio.h>
#include <math.h>
using namespace std;
void world(int x ,int y)
{
	setcolor(WHITE);
	//creates a horizontal line at the bottom that acts as border
	line(10,y,x,y);
	//creates a vertical line on the right side
	line(x,0,x,y);
}
//create a sun
void sun(int angle)
{
	setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    // Center of the sun
    int centerX = 300;
    int centerY = 200;

    // Draw sun rays
    for (int i = 0; i < 360; i += 30) {
        double rad = (i + angle) * (M_PI / 180.0); // Convert degrees to radians and apply rotation
        int x1 = centerX + 50 * cos(rad); // Calculate x coordinate
        int y1 = centerY + 50 * sin(rad); // Calculate y coordinate
        int x2 = centerX + 80 * cos(rad); // Calculate end x coordinate
        int y2 = centerY + 80 * sin(rad); // Calculate end y coordinate
        line(x1, y1, x2, y2); // Draw ray
    }

    // Draw sun
    circle(centerX, centerY, 50); // Draw sun
    floodfill(centerX, centerY, YELLOW); // Fill sun with yellow color
}
void character(int x,int y,int xo)
{
	//creates feets for the character 
	setcolor(RED);
	line(xo,y,xo+10,y-20);
	line(xo+10,y-20,xo+20,y);
	//creates the body of the character
	line(xo+10,y-20, xo+10,y-50);
	//creates head
	setcolor(BLUE);
	setfillstyle(SOLID_FILL, BLUE);
	circle(xo+10,y-60,10);
	floodfill(xo+10,y-60,BLUE);
	//creates arms
	setcolor(WHITE);
	line(xo+10,y-45,xo,y-25);
	line(xo+10,y-45,xo+20,y-25);
	return;
}
void object(int x,int y,int i)
{
	//code for the rectangle
	int k=i;
	rectangle(x-30-k*10,y-40,x-k*10,y);
	return;
}
void game()
{

	int x = getmaxx();
	int y = getmaxy();
	y = y-10;
	x-=10;
	int xo=100;
	int xvar=x-40;
	int i=0;
	char ch;
	int angle=0;
	while(true)
	{
		if(i==50)i=0;
		i++;
		world(x,y);
		sun(angle);
		object(x,y,i);
		//checks for the keyboard hit
		if(_kbhit())
		{
			ch = _getwch();
			if (ch == 'w')
            character(x+30, y - 80, xo);
            else character(x, y, xo);
		}
		else character(x, y, xo);
		angle += 5; // Increase angle for rotation
        if (angle >= 360) angle = 0; // Reset angle after full rotation
		delay(100);
		cleardevice();
	}
}
void menu()
{
	char ch;
	while(true){
	settextstyle(SANS_SERIF_FONT,0,2);
	outtextxy(0,200,"Hello Please Press E to see the animation");
	ch = _getwch();
	if(ch=='E'| ch == 'e')
	{
		cleardevice();
		game();
	}
	else outtext("Please enter E to enter");
	cleardevice();
}
}
int main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"");
	menu();
//	line(100,100,50,50);
//	settextstyle(TRIPLEX_FONT,0,1);
//	outtext("Hello World");
	getch();
	closegraph();
}

