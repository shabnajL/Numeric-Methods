#include<bits/stdc++.h>
using namespace std;
#define E 0.001
double f(double x)
{
    double sum = ((x*x) - (3*x) + 2);
    return sum;
}
double ff(double x)
{
    double sum = ((2*x) - 3);
    return sum;
}
int main()
{
    int t = 1;
    double a,b,c;
    printf("Roots : ");
    cin>>a;
    for(int i=0;; i++)
    {
        double f1,f2;
        f1 = f(a);
        f2 = ff(a);

        b = a - (f(a) / ff(a));
        printf("CASE %d : Roots = %lf\n",t++,b);
        if((b-a)<=E)
        {
            printf("\nFinal Root is : %lf\n",b);
            break;
        }
        else{
            a = b;
        }



    }


    return 0;
}

