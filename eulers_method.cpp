#include <bits/stdc++.h>
using namespace std;
#define p printf
#define s scanf
float func(float x,float y)
{
    return (1-y);
}

int main()
{
    float x0,y0,xn,h,x[5],y;
    int n;
    p("Enter n = ");
    s("%d",&n);
    p("(X0,Y0) = ");
    s("%f %f",&x0,&y0);
    p("Enter h = ");
    s("%f",&h);
    p("Enter Xn = ");
    s("%f",&xn);
    /*p("\nEnter X = ");
    for(int i=0;i<n;i++)
    {
        s("%f",&x[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(x0 < x[i])
        {
            y = y + h * func(x0, y);
            x0 = x0 + h;
        }
        cout<<"X = "<< x[i] << " Y = " << y << endl;
    }*/
    while( x0 + h <= xn)
    {
        y0 = y0 + h * func(x0, y0);
        x0 = x0 + h;
        p("X = %f\tY = %f\n",x0,y0);
    }
    p("\nValue of Y at X = %0.4f is %.4f\n",x0,y0);
    return 0;
}
