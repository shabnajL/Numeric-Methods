#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,t;
    float x[15],a[15][15],b[15],c[15];
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Number of iterations : ";
    cin>>t;
    cout<<"\nEnter A : ";
    for(int i=0; i<n; i++)
    {
        x[i]=0;
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter B : ";
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    for(int m=0; m<t; m++)
    {
        printf("\nIteration %d : \n",m+1);
        for(int i=0; i<n; i++)
        {
            c[i]=b[i];
            for(int j=0; j<n; j++)
            {
                if(i!=j)
                {
                    c[i]=c[i]-a[i][j]*x[j];
                    x[i]=c[i]/a[i][i];
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            printf("x(%d) = %.4f    ",i,x[i]);
        }cout<<endl;
    }
    return 0;
}
