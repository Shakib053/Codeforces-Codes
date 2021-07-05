#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll n,m;
cin>>n>>m;
ll a[n];
for(ll i=0;i<n;i++)
cin>>a[i];
vector<ll>v;
set<ll>st;
for(ll i=n-1;i>=0;i--)
{
st.insert(a[i]);
v.push_back(st.size());
}
//   for(auto i:v)
//   cout<<i<<" ";  
while (m--)
{
    ll l;
    cin>>l;
    
    cout<<v[n-l]<<endl;
}


 
return 0;
}
