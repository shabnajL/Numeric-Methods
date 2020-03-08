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
    float l,u,n,h;
    float x[15],y[15];
    cout<<"Intervals : ";
    cin>>n;
    cout<<"Lower limit : ";
    cin>>l;
    cout<<"Upper limit : ";
    cin>>u;
    h = (u - l)/n;
    for(int i=0;i<=n;i++)
    {
        x[i] = l +(h*i);
        y[i] = func( x[i] );
    }
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

    float sum=0.0;
	for(int i=0;i<=n;i++)
    {
		if(i==0 || i==n)
		{
		    sum = sum + y[i];
		}
		else
        {
            sum = sum + (2 * y[i]);
        }
	}
    float z = (h / 2.0);
    sum = (sum * z);
    cout<<endl<<"Sum = "<<sum<<endl;

    return 0;
}

