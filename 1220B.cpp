#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll n;
cin>>n;
ll a[n][n];
vector<ll>ans;
for(ll i=0;i<n;i++)
{
    for(ll j=0;j<n;j++)
    cin>>a[i][j];
}
ll first=sqrt((a[0][1]*a[0][2])/a[1][2]);
ans.push_back(first);
for(ll i=1;i<n;i++)
ans.push_back(a[0][i]/first);
for(auto i:ans)
cout<<i<<" ";
cout<<endl;
return 0;
}
