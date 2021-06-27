#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll t;
cin>>t;
while (t--)
{
 ll n;
 cin>>n;
ll a[n];
vector<pair<ll,ll>>vp;
for(ll i=1;i<=n;i++)
{
cin>>a[i];
vp.push_back({a[i],i});
}
sort(vp.begin(),vp.end());
ll ans=0;
// for(auto i:vp)
// cout<<i.first<<" "<<i.second<<endl;
for(ll i=1;i<=vp.size();i++)
{
    for(ll j=i+1;j<=vp.size();j++)
    {

        ll plus=vp[i-1].second+vp[j-1].second;
        ll mul=vp[i-1].first*vp[j-1].first;
     if(plus==mul)
     ans++;
     if(mul>2*n)
     break;
    }
}
cout<<ans<<endl;


}

 
return 0;
}
