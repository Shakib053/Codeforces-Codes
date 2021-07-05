#include<bits/stdc++.h>
#include<iterator>
#define ll  long long 
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll t;
cin>>t;
while (t--)
{ 
ll n;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
ll mx=a[n-1];
ll c=0;
if(n==1)
cout<<1<<endl;
else
{
for(ll i=n-1;i>0;i--)
{
    if(abs(a[i]-a[i-1])>=mx)
    {
     c++;
    }
    else
    {
        mx=a[i-1];
    }
    if(i==1)
    c++;
}
cout<<c<<endl;
}

}

return 0;
}