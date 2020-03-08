#include<bits/stdc++.h>
using namespace std;
float func(float x)
{
    float y;
    y = x / (1 + x);
    return y;
}
int main()
{
    float l,u,t,n,h;
    float x[15],y[15];
    cout<<"Intervals : ";
    cin>>n;
    cout<<"Lower limit : ";
    cin>>l;
    cout<<"Upper limit : ";
    cin>>u;
    h = (u - l)/n;
    float sum1=0.0,sum2=0.0,sum=0.0;
    sum1 = func(l)+func(u);
    int cnt = 0,g =-1;
    x[cnt++] = l;
    y[++g] = func(l);
    for(float i=l+h; i<u; i+=h)
    {
        x[cnt++] = i;
        y[++g] = func(i);
        sum2 = sum2 + func(i);
        //cout<<"sum2 =  "<<sum2<<endl;
    }
    x[cnt] = u;
    y[++g] = func(u);
    cout<<endl;
    printf("X = ");
    for(int i=0;i<=n;i++)
    {
        printf("%f | ",x[i]);
    }cout<<endl;
    printf("Y = ");
    for(int i=0;i<=n;i++)
    {
        printf("%f | ",y[i]);
    }cout<<endl;

    float z = (h / 2.0);
    sum = ((sum1 + (2.0 * sum2)) * z);;
    cout<<endl<<"Sum = "<<sum<<endl;
    return 0;
}

