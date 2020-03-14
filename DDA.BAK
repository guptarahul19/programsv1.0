#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main(){
 int gmode,gdriver=DETECT;
 initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

 float x,y,xn,yn,dx,dy,m,xinc,yinc,n;

 cout<<"Enter initial point: ";
 cin>>x>>y;
 cout<<"Enter final point: ";
 cin>>xn>>yn;
 dx = xn - x;
 dy = yn - y;

 if(dx>dy)
 {
 m = dx;
 }
 else
 {
 m = dy;
 }
 xinc = dx/m;
 yinc = dy/m;

 cout<< " Number of steps = "<<m;
 putpixel(x,y,12);
 for(n=1;n++;n<=m)
 {
 x = x + xinc;
 y = y + yinc;
 putpixel(x,y,12);
 if(n>m){
 break;}
 }
 getch();
}