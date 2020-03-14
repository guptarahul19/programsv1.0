#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main(){
 int gmode,gdriver=DETECT;
 initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");

 float i,x,y,xn,yn,dx,dy,p,m,n,p1;

 cout<<"Enter initial point :";
 cin>>x>>y;
 cout<<"Enter final point :";
 cin>>xn>>yn;
 dx = xn-x;
 dy = yn-y;
 m = dx/dy;
 if(m<=0)
 {
 cout<<"Algorithm not applicable";
 }
 else
 {
  if(dx>dy)
  {
  n = dx - 1;
  }
  else
  {
  n = dy - 1;
  }
  cout<<"Number of steps :"<<n;
  putpixel(x,y,10);
  p = (2 * dy) - dx;
  for(i=1;i++;i<=n)
  {
   if(p<=0)
   {
    x = x + 1;
    y = y;
    putpixel(x,y,10);
    p1 = p + (2*dy);
    p = p1;
    if(i>n){
    break;}
   }
   else
   {
    x = x + 1;
    y = y + 1;
    putpixel(x,y,10);
    p1 = p + ((2*dy)-(2*dx));
    p = p1;
    if(i>n){
    break;}
   }
  }
 }
 getch();
}