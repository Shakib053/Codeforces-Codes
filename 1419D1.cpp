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
ll ans=(n-1)/2;
cout<<ans<<endl;
sort(a,a+n);
vector<ll>v1,v2;
for(ll i=0;i<ans;i++)
{
  v1.push_back(a[i]);
}
for(ll i=ans;i<n;i++)
{
  v2.push_back(a[i]);
}
for(ll i=0;i<v2.size();i++)
{
  cout<<v2[i]<<" ";
  if(i<v1.size())
  cout<<v1[i]<<" ";
}
cout<<endl;


 
return 0;
}
