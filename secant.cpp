#include<bits/stdc++.h>
using namespace std;
#define E 0.0001
double f(double x)
{
    double sum = ((x*x) - (4*x) - 10);
    return sum;
}

int main()
{
    double a,b,c;
    printf("Roots : ");
    cin>>a>>b;

    int t = 1;

    double f1,f2,f3;
    f1 = f(a);
    f2 = f(b);
    c = ( (f2*a-f1*b) / (f2-f1) );

    while((c-b)>E)
    {
        for(int i=0;; i++)
        {
            f3 = f(c);
            a = b;
            f1 = f2;
            b = c;
            f2 = f3;
            c = ( (f2*a-f1*b) / (f2-f1) );
            printf("CASE %d : A = %.4lf B = %.4lf\n",t++,a,b);
            if((b-a)<=E)
            {
                break;
            }
             //printf("\nCASE %d : A = %.4lf B = %.4lf\n\n",i+1,a,b);
        }
    }

    return 0;
}
