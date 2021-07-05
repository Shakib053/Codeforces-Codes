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
 ll n,l,r;
 cin>>n>>l>>r;
 vector<ll>v;
for(ll i=0;i<n;i++)
 {
     ll x;
     cin>>x;
     v.push_back(x);
 }
 sort(v.begin(),v.end());
 ll ans=0;
for(ll i=0;i<n-1;i++)
 {
    auto it1=lower_bound(v.begin()+i+1,v.end(),l-v[i]);
    auto it2=upper_bound(v.begin()+i+1,v.end(),r-v[i]);
    ans=ans+(it2-it1);
 }
cout<<ans<<endl;




}
return 0;
}
