#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll n,k;
cin>>n>>k;
map<char,ll>mp;
for(int i=0;i<n;i++)
{
    char x;
    cin>>x;
    mp[x]++;
}
ll ans=0;
vector<ll>v;
for(auto i:mp)
{
    ll x=i.second;
    v.push_back(x);
}
sort(v.begin(),v.end());
// for(auto i:v)
// {
//    cout<<i<<" "<<endl;
// }

for(ll i=v.size()-1;i>=0;i--)
{
    if(k>=v[i])
    {  
        ll cnt=min(k,v[i]);
        ans=ans+(cnt*cnt);
        k=k-v[i];
    }
    else
    { 
        ll cnt2=min(k,v[i]);
        ans=ans+(cnt2*cnt2);
        k=k-v[i];
    }
    if(k<=0)
    break;
    
}
cout<<ans<<endl;

 
return 0;
}
