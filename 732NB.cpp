#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
vector<int>v;
int ans=0;
 v.push_back(a[0]);
for(int i=1;i<n;i++)
{
    if((a[i]+a[i-1])<k)
    { 
        int need=k-(a[i]+a[i-1]);
        v.push_back(need+a[i]);
        a[i]=need+a[i];
        ans=ans+need;
     }
     else
      {
        v.push_back(a[i]);
      }
}
for(int i=0;i<n;i++)
{
    if(v[i]>a[i])
    ans=ans+(v[i]-a[i]);
}
cout<<ans<<endl;
for(auto i:v)
cout<<i<<" ";
cout<<endl;

return 0;
}
