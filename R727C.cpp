#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll n,k,x;
cin>>n>>k>>x;
ll a[n];
for(ll i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
// for(ll i=0;i<n;i++)
// cout<<a[i]<<" ";
// cout<<endl;
ll ans=1;
vector<ll>v;
for(ll i=1;i<n;i++)
{
  if(a[i]-a[i-1]>x)
  {   
    ll cnt=(a[i]-a[i-1]-1);
    
      if(cnt>0)
      {
         v.push_back(cnt);
      }
    
  }
}
sort(v.begin(),v.end());
for(auto i: v)
{
 if(k-(i/x)>=0)
 {
   k=k-(i/x);
 }
 else
 ans++;
}
 cout<<ans<<endl;
return 0;
}
