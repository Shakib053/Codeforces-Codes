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
set<ll>s;
for(ll i=0;i<n;i++)
{
cin>>a[i];
s.insert(a[i]);
}
sort(a,a+n);
int cnt=1;
int x=s.size();
vector<ll>v;
 for(auto it:s)
 {
    v.push_back(it);
 }
 ll j=0;
 for(ll i=0;i<k;i++){
    int flag=0;
    ll ans=0;
    if(cnt<=x)
    {
       if(cnt==1)
       ans=v[j];
       else
      ans=v[j]-v[j-1];
     j++;
     cnt++;
      }
cout<<ans<<endl;

}

return 0;
}
