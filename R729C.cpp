#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
ll lcm(ll a,ll b)
{
    ll x=(a*b)/(__gcd(a,b));
    return x;
}
int main()
{
ll t;
    cin>>t;
while (t--)
{
    ll n;
    cin>>n;
    ll ans=0;
    ll i=1;
    ll j=2;
    ll rem=n;
 while(rem>0)
 {
    ll xx=lcm(i,j);
    ll y=n/xx;
    ll yy=rem-y;
    ans=(ans%mod + (yy*j)%mod)%mod;
    j++;
    i=xx;
    rem=y;
 }
 ans=ans%mod;
 cout<<ans<<endl;
}

 
return 0;
}
