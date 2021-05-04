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
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int cnt=0;
    for(int j=0;j<m-1;j++)
        {
            if(a[n-1][j]!='R')
            cnt++;
        }
   for(int j=0;j<n-1;j++)
        {
            if(a[j][m-1]!='D')
            cnt++;
        }
   
   cout<<cnt<<endl;
}



return 0;
}
