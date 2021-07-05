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
vector<ll>ans;
ll sum=0;
for(ll i=0;i<n;i++)
{
   a[i]=a[i]+sum;
   sum=max(sum,a[i]);
   ans.push_back(a[i]);
}
for(auto i :ans)
cout<<i<<" ";
cout<<endl;
return 0;
}
