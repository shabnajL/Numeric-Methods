#include <bits/stdc++.h>
using namespace std;
#define p printf
#define s scanf
float func(float x,float y)
{
    //return ((2*y) / x);
    return (x + y);
}

int main()
{
    float x0,y0,h,xn;
    p("(X0,Y0) = ");
    s("%f %f",&x0,&y0);
    p("Enter Xn = ");
    s("%f",&xn);
    p("Enter h = ");
    s("%f",&h);

    float m1,m2,m3,m4;
    while( x0 + h <= xn)
    {
        m1 = func( x0, y0);
        m2 = func( x0+0.5*h, y0+0.5*m1*h);
        m3 = func( x0+0.5*h, y0+0.5*m2*h);
        m4 = func( x0+h, y0+m3*h);
        y0 = y0 + ( (h/6) * (m1+2*m2+2*m3+m4) );
        x0 = x0 + h;
        p("X = %f\tY = %f\n",x0,y0);
    }
    p("\nValue of Y at X = %0.4f is %.4f\n",x0,y0);

    return 0;
}

