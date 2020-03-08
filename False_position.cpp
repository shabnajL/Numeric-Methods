#include<bits/stdc++.h>
using namespace std;
#define E 1.00002
double f(double x)
{
    double sum = ((x*x) - x - 2);
    return sum;
}
int main()
{
    double a,b,c;
    printf("Roots : ");
    cin>>a>>b;

int t = 1;
    while((b-a)>E)
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
            c = a -( (f1*(b-a))/(f2-f1) );
            f3 = f(c);
            if((f1*f3)<0)
            {
                b = c;
            }
            else
            {
                a = c;
            }
            if((b-a)<=E)
            {
                break;
            }

            printf("CASE %d : A = %.4lf   B = %.4lf\n",t++,a,b);

        }

    }
    return 0;
}
