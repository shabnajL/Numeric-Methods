#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float A[25][25],up,x[15],sum;
    printf("Order of matrix: ");
    scanf("%d",&n);
    printf("Elements of matrix :\n");
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(n+1); j++)
        {
            printf("A[%d][%d] : ", i,j);
            scanf("%f",&A[i][j]);
        }
    }
    for(int j=1; j<=n; j++) /*upper triangular matrix*/
    {
        for(int i=1; i<=n; i++)
        {
            if(i>j)
            {
                up = A[i][j] / A[j][j];
                for(int k=1; k<=n+1; k++)
                {
                    A[i][k] -= (up * A[j][k]);
                }
            }
        }
    }
    x[n] = A[n][n+1] / A[n][n];
    /*backward substitution*/
    for(int i=n-1; i>=1; i--)
    {
        sum=0;
        for(int j=i+1; j<=n; j++)
        {
            sum = sum + A[i][j]*x[j];
        }
        x[i] = (A[i][n+1]-sum) / A[i][i];
    }
    printf("\nResult : ");
    for(int i=1; i<=n; i++)
    {
        printf("\nx%d = %0.2f\t",i,x[i]);
    }
    return 0;
}
