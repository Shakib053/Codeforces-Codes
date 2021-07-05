#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll n;
cin>>n;
ll ans=0;
ll a[n];
ll one=0,two=0,three=0,four=0;
for(ll i=0;i<n;i++)
{
  cin>>a[i];
  if(a[i]==1)
  one++;
  else if(a[i]==2)
  two++;
  else if(a[i]==3)
  three++;
  else 
  four++;
}
ans=ans+four;
if(one>=1 && three>=1)
{
    ll mn=min(one,three);
    ans=ans+three;
    one=one-mn;
}
else if(three>=1)
{
    ans=ans+three;
}
two=(two*2)+one;
if(two%4!=0)
two=(two/4)+1;
else
two=two/4;
ans=ans+two;
cout<<ans<<endl;
return 0;
}
