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
 ll a[2*n];
 for(ll i=0;i<2*n;i++)
 cin>>a[i];
 sort(a,a+2*n);
// for(ll i=0;i<2*n;i++)
//  cout<<a[i]<<" ";
//  cout<<endl;
 ll ans=abs(a[n]-a[n-1]);
 cout<<ans<<endl;
}

 
return 0;
}
