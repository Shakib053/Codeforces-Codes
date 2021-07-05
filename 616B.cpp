#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll n,m;
cin>>n>>m;
vector<ll>vp;
while (n--)
{
    vector<ll>v;
    for(ll i=0;i<m;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    vp.push_back(v[0]);
}
sort(vp.begin(),vp.end());
cout<<vp[vp.size()-1]<<endl;
 
return 0;
}
