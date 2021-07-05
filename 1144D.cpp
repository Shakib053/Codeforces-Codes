#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;

int main()
{
ll n;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++)
cin>>a[i];
set<ll>s;
map<ll,ll>mp;
for(ll i=0;i<n;i++)
{
    s.insert(a[i]);
    mp[a[i]]++;
}
ll maxi=-1,mx;
for(auto it: mp)
{
    ll x=it.second;
    if(x>=maxi)
    {
    mx=it.first;
    }
    maxi=max(maxi,x);
}
ll pos;
for(ll i=n-1;i>=0;i--)
{
 if(a[i]==mx)
 {
     pos=i;
     break;
 }
}
// cout<<a[pos]<<endl;
cout<<n-maxi<<endl;
for(ll i=pos-1;i>=0;i--)
{
if(a[i]!=mx)
    {
    cout<<1+(a[i]>mx)<<' '<<i+1<<' '<<i+1+1<<endl;
    }
}
for(ll i=pos+1;i<n;i++)
{
if(a[i]!=mx)
    {
    
    cout<<1+(a[i]>mx)<<' '<<i+1<<' '<<i<<endl;
    }
}
// for(int i=0;i<ans.size();i++)
// cout<<ans[i].first<<" "<<ans[i].second.first<<" "<<ans[i].second.second<<endl;
return 0;
}
