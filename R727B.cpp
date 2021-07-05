#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll n,q;
cin>>n>>q;
string s;
cin>>s;
vector<ll>vp;
ll x=0;
vp.push_back(0);
for(ll i=0;i<s.size();i++)
{  
   
    x=x+(s[i]-'a'+1);
   vp.push_back(x);
}
// for(auto i:vp)
// cout<<i<<" ";
// cout<<endl;
while (q--)
{
    ll l,r;
    cin>>l>>r;
    ll ans=vp[r]-vp[l-1];
    cout<<ans<<endl;
}



 
return 0;
}
