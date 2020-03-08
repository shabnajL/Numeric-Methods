#include<bits/stdc++.h>
using namespace std;
vector<int>A[105];
vector<int>B[105];
vector<int>AT[105];
vector<int>AdjA[105];
vector<int>Inv_A[105];
vector<int>X[105];
vector<int>v;
#define pb push_back
int main()
{
    long long int r1,r2,c1,c2,i,j,sum,sum1,sum2,sum3,sumT,p,q,a,t,cnt;
    cin>>t;
    while(t--)
    {
        int x;
        cout<<"Enter r & c for A : ";
        cin>>r1>>c1;
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                cin>>x;
                A[i].pb(x);
            }
        }
        cout<<"Enter r & c for B : ";
        cin>>r2>>c2;
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                cin>>x;
                B[i].pb(x);
            }
        }

        i=0;
        for(j=0; j<c1; j++)
        {
            if(j==0)
            {
                sum1 = A[i][j]*((A[i+1][j+1]*A[i+2][j+2])-(A[i+2][j+1]*A[i+1][j+2]));

            }
            if(j==1)
            {
                sum2 = -(A[i][j])*((A[i+1][j-1]*A[i+2][j+1])-(A[i+2][j-1]*A[i+1][j+1]));
            }
            if(j==2)
            {
                sum3 = A[i][j]*((A[i+1][j-2]*A[i+2][j-1])-(A[i+2][j-2]*A[i+1][j-1]));
            }
        }
        sum = sum1 + sum2 + sum3;
        if(sum!=0)
        {
            for(i=0; i<r1; i++)
            {
                for(j=0; j<c1; j++)
                {
                    AT[i].pb(A[j][i]);
                }
            }
            cout<<endl<<"Transpose Matrix : "<<endl;
            for(i=0; i<r1; i++)
            {
                for(j=0; j<c1; j++)
                {
                    cout<<AT[i][j]<<" ";
                }
                cout<<endl;
            }
            for(p=0; p<r1; p++)
            {
                for(q=0; q<c1; q++)
                {
                    int l[]= {0,1,2};
                    int k[]= {0,1,2};
                    for(i=0; i<r1; i++)
                    {
                        for(j=0; j<c1; j++)
                        {
                            if(l[i]!=p && k[j]!=q)
                            {
                                v.pb(AT[l[i]][k[j]]);
                            }
                        }
                    }
                    a=(v[0]*v[3])-(v[2]*v[1]);
                    if((p+q)%2==0)
                    {
                        AdjA[p].pb(a);
                    }
                    else
                    {
                        AdjA[p].pb(a*(-1));
                    }
                    v.clear();
                }
            }
            cout<<endl<<"Adjoint Matrix : "<<endl;
            for(i=0; i<r1; i++)
            {
                for(j=0; j<c1; j++)
                {
                    cout<<AdjA[i][j]<<" ";
                }
                cout<<endl;
            }
            for(i=0; i<r1; i++)
            {
                sumT=0;
                for(j=0; j<c1; j++)
                {
                   sumT += AdjA[i][j]*B[j][c2-1];
                }
                Inv_A[i].pb(sumT);
            }
            for(i=0; i<r2; i++)
            {
                for(j=0; j<c2; j++)
                {
                    X[i].pb(Inv_A[i][j]/sum);
                }
            }
            cout<<endl<<"X : "<<endl;
            for(i=0; i<r2; i++)
            {
                for(j=0; j<c2; j++)
                {
                    cout<<X[i][j]<<" ";
                }
                cout<<endl;
            }
            cnt=0;
            for(i=0; i<r2; i++)
            {
                for(j=0; j<c2; j++)
                {
                    if(cnt==0)
                    {
                        cout<<"x = "<<X[i][j]<<endl;
                    }
                    if(cnt==1)
                    {
                        cout<<"y = "<<X[i][j]<<endl;
                    }
                    if(cnt==2)
                    {
                        cout<<"z = "<<X[i][j]<<endl;
                    }
                }
                cnt++;
            }
        }
        else
        {
            cout<<"Inverse matrix doesn't exist."<<endl;
        }
        for(i=0; i<=100; i++)
        {
            A[i].clear();
            B[i].clear();
            AT[i].clear();
            AdjA[i].clear();
            Inv_A[i].clear();
            X[i].clear();
        }
        v.clear();
    }
    return 0;
}
