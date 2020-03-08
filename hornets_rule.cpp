#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n,x,a[105],p[105];
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
        p[n] = a[n];
        printf("\nP[%d] = %d\n",n,p[n]);
        for(int i=n-1; i>=0; i--)
        {
            p[i] = (p[i+1] * x)+a[i];
            printf("P[%d] = %d\n",i,p[i]);
        }
        printf("\n\n");

        memset(a,0,sizeof(a));
        memset(p,0,sizeof(p));
    }
    return 0;
}
