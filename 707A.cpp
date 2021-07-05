#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
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
int c=0,cnt=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
       if(a[i][j]=='C' || a[i][j]=='M' || a[i][j]=='Y' )
        {
          cout<<"#Color\n";
          return 0;
        }
       else
       c++;
       
    }
}
if(c==(n*m))
cout<<"#Black&White\n";

return 0;
}
