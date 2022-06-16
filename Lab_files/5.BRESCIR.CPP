#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gdriver = DETECT, gmode;
	int x, y,xc,yc,r,d;
	clrscr();
	initgraph(&gdriver,&gmode, "C:\\TURBOC3\\BGI");
	printf("Enter the center coordinates");
	scanf("%d%d",&xc,&yc);
	printf("Enter the radius of the circle");
	scanf("%d",&r);
	d =3-2*r;
	x=0;
	y=r;
	while (x<=y)
	{
		putpixel(x+xc,y+yc,YELLOW);
			delay(20);
		putpixel(x+xc,-y+yc,YELLOW);
		delay(20);
		putpixel(-x+xc,-y+yc,YELLOW);
		delay(20);
		putpixel(-x+xc,y+yc,YELLOW);
		delay(20);
		putpixel(y+xc,x+yc,YELLOW);
		delay(20);
		putpixel(y+xc,-x+yc,YELLOW);
		delay(20);
		putpixel(-y+xc,-x+yc,YELLOW);
		delay(20);
		putpixel(-y+xc,x+yc,YELLOW);
		delay(20);
		if(d<=0)
		{
			x = x+1;
			d= d+4*x+6;
		}
		else
		{
			x=x+1;
			y=y-1;
			d=d+4*(x-y)+10;
		}
	}
	getch();
	closegraph();
	}