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
ll mini=mod;
sort(a,a+n);
ll big,small,ini,out;
for(ll i=1;i<n;i++)
{
    ll dif=a[i]-a[i-1];
    if(mini>=dif)
    {
     big=a[i];
     ini=i;
     small=a[i-1];
     out=i-1;
  mini=min(dif,mini);
    }
}
sort(a,a+n);
cout<<small<<" ";
for(ll i=ini+1;i<n;i++)
{
    cout<<a[i]<<" ";
}
for(ll i=0;i<out;i++)
{
    cout<<a[i]<<" ";
}
cout<<big<<endl;

}

return 0;
}
