#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{
 ll n;
 cin>>n;
 ll a[n];
 for(ll i=0;i<n;i++)
 cin>>a[i];
 ll ans=0;
 for(ll i=0;i<n;i++)
 {   
     ans=max(0ll,a[i]+ans);
 }
cout<<ans<<endl;



}


return 0;
}
