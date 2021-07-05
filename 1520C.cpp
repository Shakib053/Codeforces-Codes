#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{ 
    int n;
    cin>>n;
    int a[n][n];
    int odd=1;
    int even=2;
    if(n==1)
    cout<<1<<endl;
    else if(n==2)
    cout<<-1<<endl;
    else
    {
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(odd<=n*n)
            {
            a[i][j]=odd;
            odd=odd+2;
            }
            else if(even<=n*n)
            {
            a[i][j]=even;
            even=even+2;
            }
            
        }
    }
       for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    }
   
}


return 0;
}
