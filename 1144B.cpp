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
sort(a,a+n);
vector<ll>v1,v2;
ll odd=0,even=0;
for(ll i=0;i<n;i++)
{
    if(a[i]%2==0)
    {
    even++;
    v1.push_back(a[i]);
    }
    
    else
    {
    odd++;
    v2.push_back(a[i]);
    }
   
}
//    cout<<odd<<" "<<even<<endl;
if(abs(odd-even)<=1)
cout<<0<<endl;
else
{
    ll index=min(odd,even);
    index=index+1;
    ll sum=0;
    // cout<<index<<endl;
    if(v1.size()<v2.size())
    {
    for(ll i=0;i<v2.size()-index;i++)
    sum=sum+v2[i];
    }
    else
    {
    for(ll i=0;i<v1.size()-index;i++)
    sum=sum+v1[i];  
    }
    cout<<sum<<endl;
}
return 0;
}
