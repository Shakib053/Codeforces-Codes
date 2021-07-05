#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll n,m;
cin>>n>>m;
ll a[m];
for(ll i=0;i<m;i++)
cin>>a[i];
ll ans=a[0]-1;
for(ll i=1;i<m;i++)
{
    if(a[i]<a[i-1])
    {
        ans=ans+n-a[i-1]+a[i];
    }
    else
    ans=ans+a[i]-a[i-1];
}
cout<<ans<<endl;

return 0;
}
