#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll n,k;
cin>>n>>k;
ll a[n];
for(ll i=0;i<n;i++)
cin>>a[i];
vector<ll>v;
v.push_back(0);
ll sum=0;
vector<pair<ll,ll>>vp;
for(ll i=0;i<n;i++)
{  
    sum=sum+a[i];
    v.push_back(sum);
}
for(ll i=1;i<=n-k+1;i++)
{  
    ll val=v[i+k-1]-v[i-1];
    vp.push_back({val,i});
}
sort(vp.begin(),vp.end());
// for(auto i:vp)
// cout<<i.first<<" "<<i.second<<endl;
cout<<vp[0].second<<endl;

 
return 0;
}
