#include<bits/stdc++.h>
using namespace std;
void writeQ(int n,int b[])            //this function is just to show the equation Q(x)
{
    printf("\nQ(x) : ");
    for(int i=n-1; i>=0; i--)
    {
        if(b[i]!=0)
        {
            if(i==n-1)
            {
                printf("%dX^%d ",b[i],i);
            }
            else if(i==0)
            {
                if(b[i]>0)
                {
                    printf("+");
                }
                printf("%d ",b[i]);
            }
            else if(i==1)
            {
                if(b[i]>0)
                {
                    printf("+");
                }
                printf("%dX ",b[i]);
            }
            else
            {
                if(b[i]>0)
                {
                    printf("+");
                }
                printf("%dX^%d ",b[i],i);
            }
        }
    }
    printf("= 0\n\n");
}
int main()
{
    int n,x,a[105],b[105];
    int T;
    cin>>T;
    while(T--)
    {
        printf("Enter N : ");
        cin>>n;
        printf("\n");
        for(int i=n; i>=0; i--)
        {
            printf("Enter A[%d] : ",i);
            cin>>a[i];
        }
        printf("\nEnter X : ");
        cin>>x;
        b[n] = 0;
        printf("\nB[%d] = %d\n",n,b[n]);
        for(int i=n-1; i>=0; i--)
        {
            b[i] = (a[i+1] + (b[i+1] * x));
            printf("B[%d] = %d\n",i,b[i]);
        }
        writeQ(n,b); //showing the equation Q(x)
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
    }
    return 0;
}
