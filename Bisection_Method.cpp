#include<bits/stdc++.h>
using namespace std;
#define E 0.001
double f(double x)
{
    double sum = ((x*x*x) - x - 1);
    //double sum = ((x*x*x) - x - 3);
    //double sum = ((x*x) - (4*x) - 10);
    return sum;
}
int main()
{
    double a,b,c;
    //int T = 200;
    //printf("TestCases : ");
    //cin>>T;
    printf("Roots : ");
    cin>>a>>b;

    //for(int t=0; t<T; t++)
    while((b-a)>=E)
    {
        double f1,f2,f3;
        f1 = f(a);
        f2 = f(b);
        if(f1*f2>0)
        {
            printf("Wrong Guess\n");
            break;
        }
        else if(f1*f2<=0)
        {
            c = (a+b)/2;
            f3 = f(c);
            if((f1*f3)<0)
            {
                b = c;
            }
            else
            {
                a = c;
            }
            if((b-a)<E)
            {
                break;
            }

            printf("A = %.4lf   B = %.4lf\n",a,b);

        }

    }


    return 0;
}
