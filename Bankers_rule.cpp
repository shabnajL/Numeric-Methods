#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    //double a = 3.14159265;
    string s,s1;
    while(cin>>s)
    {
        int i,x,y,n;
        cout<<"Enter x : ";
        cin>>x;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='.')
            {
                x = x+1;
                n = x ;
            }
        }
        //n = x ;
        //cout<<n<<endl<<endl;
        //map<char>mp;
        vector<char>v;
        for(int i=0; i<n; i++)
        {
            v.pb(s[i]);
            //s1[i] += s[i];
            //cout<<i<<" = "<<s[i]<<" "<<s1[i]<<endl;
        }


        if(s[n+1]<'5')
        {
            v.pb(s[n]);
        }
        else if(s[n+1]>'5')
        {
            v.pb(s[n]+1);
        }
        else if(s[n+1]=='5')
        {
            int r = (s[n]-48);
            if(r%2==0)
            {
                v.pb(s[n]);
            }
            else
            {
                v.pb(s[n]+1);
            }
        }
        cout<<"Res = ";
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        s.clear();
        s1.clear();
        v.clear();
    }

    return 0;
}
