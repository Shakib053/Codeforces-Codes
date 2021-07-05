#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
ll a1[n][m];
ll a2[n][m];
for(ll i=0;i<n;i++)
{
    for(ll j=0;j<m;j++)
    cin>>a1[i][j];
}
for(ll i=0;i<n;i++)
{
    for(ll j=0;j<m;j++)
    cin>>a2[i][j];
}
for(ll i=0;i<n;i++)
{
    for(ll j=0;j<m;j++)
    {
        if(a1[i][j]>=a2[i][j])
        {
            swap(a1[i][j],a2[i][j]);
        }
    }
}
// for(ll i=0;i<n;i++)
// {
//     for(ll j=0;j<m;j++)
//     {
//         cout<<a1[i][j]<<" ";
//     }
//     cout<<endl;
// }
// for(ll i=0;i<n;i++)
// {
//     for(ll j=0;j<m;j++)
//     {
//         cout<<a2[i][j]<<" ";
//     }
//     cout<<endl;
// }
int flag=0;
for(ll i=0;i<n;i++)
{
    for(ll j=0;j<m;j++)
    {
        if(j!=m-1 && a1[i][j]>=a1[i][j+1])
        {
           flag=1;
           break;
        }
        if(i!=n-1 && a1[i][j]>=a1[i+1][j])
        {
           flag=1;
           break;
        }
        if(j!=m-1 && a2[i][j]>=a2[i][j+1])
        {
           flag=1;
           break;
        }
        if(i!=n-1 && a2[i][j]>=a2[i+1][j])
        {
           flag=1;
           break;
        }
        if(flag==1)
        break;
    }
}
if(flag==0)
cout<<"Possible\n";
else
cout<<"Impossible\n";

return 0;
}
