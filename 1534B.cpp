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
 vector<ll>a;
 a.push_back(0);
 for(ll i=0;i<n;i++)
 {
  ll x;
  cin>>x;
  a.push_back(x);
 }
 a.push_back(0);
 ll ans=0,check=0,sum=0;
 for(ll i=1;i<=n;i++)
 {
     if(a[i]>a[i+1] && a[i]>a[i-1])
     {
       check=a[i]-max(a[i-1],a[i+1]);
       sum=sum+check;
       a[i]=a[i]-check;
     }
 }
  for(ll i=1;i<=n+1;i++)
 {
    ans=ans+abs(a[i]-a[i-1]);
 }
cout<<ans+sum<<endl;


}
return 0;
}
