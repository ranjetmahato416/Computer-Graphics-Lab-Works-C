#include<stdio.h>
#include<graphics.h>//must be included for every graphics program
#include<conio.h>
#include<dos.h> //for including delay function.
void main()
{
int gdriver=DETECT,gmode; //gdriver=detects best available graphics driver, gmmode =graphics mode.
initgraph(&gd,&gm,”C:\\TurboC3\\BGI”);// for initializing graph mode
// above 2 steps are must for every graphics program.
//declaration of any variables must be done before calling initgraph() function.
// next write code for producing requiring design or drawing object
line(100,100,200,200);//draws a line segment.
getch();
}