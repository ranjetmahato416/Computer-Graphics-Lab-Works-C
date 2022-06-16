#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void plot_pts(int,int,int,int);
void main()
{
	int gdriver = DETECT,gmode;
	int xc,yc,x,y;
	float p,r;
	clrscr();
	initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
	printf("enter the center coordinates");
	scanf("%d%d",&xc,&yc);
	printf("enter the radius of the circle");
	scanf("%f",&r);
	x=0;
	y=r;
	p=(5/4)-r;
	//printf("%f",p);
	do
	{
		plot_pts(xc,yc,x,y);
		if(p<0)
		{
			p=p+((2*x)+1);
		}
		else
		{
			p=p+((2*(x-y)+1));
			y--;
		}
	x++;
	} while(x<y);
	if (x==y)
	{
		plot_pts(xc,yc,x,y);
	}
	getch();
	closegraph();
}
void plot_pts(int x, int y, int x1, int y1)
{
	putpixel(x+x1, y+y1, YELLOW);
	putpixel(x-x1, y+y1, YELLOW);
	putpixel(x+x1, y-y1, YELLOW);
	putpixel(x-x1, y-y1, YELLOW);
	putpixel(x+y1, y+x1, YELLOW);
	putpixel(x-y1, y+x1, YELLOW);
	putpixel(x+y1, y-x1, YELLOW);
	putpixel(x-y1, y-x1, YELLOW);
       //	delay(20);
}