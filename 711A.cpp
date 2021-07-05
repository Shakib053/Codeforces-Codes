#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
int r;
cin>>r;
char a[r][5];
for(int i=0;i<r;i++)
{
    for(int j=0;j<5;j++)
    {
        cin>>a[i][j];
    }
}
int flag=0;
for(int i=0;i<r;i++)
{
    for(int j=0;j<4;j++)
    {
        if(a[i][j]=='O' && a[i][j+1]=='O')
        {
          a[i][j]='+';
          a[i][j+1]='+';
          flag=1;
          break;
        } 
    }
    if(flag==1)
    break;
}
if(flag==1)
{
    cout<<"YES\n";
    for(int i=0;i<r;i++)
{
    for(int j=0;j<5;j++)
    {
        cout<<a[i][j]; 
    }
    cout<<endl;
}
}
else
cout<<"NO\n";

return 0;
}
