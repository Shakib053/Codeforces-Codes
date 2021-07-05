#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll n,m;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++)
cin>>a[i];
cin>>m;
ll b[m];
for(ll i=0;i<m;i++)
cin>>b[i];
ll i=0;
sort(a,a+n);
ll sum=0;
for(ll j=0;j<n;j++)
    {
        sum=sum+a[j];
    }
while (m--)
{
    ll cnt=n-b[i];
    ll ans=0;
    ans=sum-a[cnt];
    cout<<ans<<endl;
    i++;
}



return 0;
}
