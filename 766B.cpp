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
vector<ll>v;
for(ll i=0;i<n;i++)
{
cin>>a[i];
v.push_back(a[i]);
}
sort(v.begin(),v.end());
// for(auto i:v)
// cout<<i<<" ";
 ll se=v.size()-1;
 int flag=0;
//  cout<<se<<endl;
 for(ll i=se;i>1;i--)
 {
if((v[i-1]+v[i-2])>v[i])
{
    flag=1;
    break;
}
 }
 if(flag==1)
 cout<<"YES\n";
 else
 cout<<"NO\n";
 

return 0;
}
