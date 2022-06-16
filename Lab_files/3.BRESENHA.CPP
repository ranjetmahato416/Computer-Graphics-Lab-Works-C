#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int x,y,x1,y1,x2,y2,dx,dy,p,i;
	int gdriver = DETECT,gmode;
	clrscr();
	initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
	printf("enter first coordinates");
	scanf("%d%d",&x1,&y1);
	printf("enter second coordinates");
	scanf("%d%d",&x2,&y2);
	dx = x2-x1;
	dy = y2-y1;
	p = 2*dy-dx;
	x=x1;
	y=y1;
	i=0;
	while(i<=dx)
	{
		putpixel(x,y,LIGHTBLUE);
		delay(100);
		if(p<0)
		{
			x=x+1;     1
			63
			2
			p=p+2*dy;
		}
		else
		{
			x=x+1;
			y=y+1;
			p=p+2*dy-2*dx;
		}
	i++;
	}
	getch();
	closegraph();
	}