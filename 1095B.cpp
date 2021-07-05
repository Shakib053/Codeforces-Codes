#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
un ll t;
cin>>t;
vector<un ll>v;
for(un ll i=0;i<t;i++)
{
    un ll x;
    cin>>x;
    v.push_back(x);
}
sort(v.begin(),v.end());
// v.pop_back();

un ll ans1=v[v.size()-1]-v[1];
un ll ans2=v[v.size()-2]-v[0];
un ll ans=min(ans1,ans2);
cout<<ans<<endl;


return 0;
}
