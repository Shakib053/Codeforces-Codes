#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll n;
cin>>n;
ll sum=0,sum1=0,sum2=0;
for(int i=0;i<n;i++)
{
    ll x;
cin>>x;
sum=sum+x;
}
for(int i=0;i<n-1;i++)
{
    ll y;
cin>>y;
sum1=sum1+y;
}
ll ans1=sum-sum1;
for(int i=0;i<n-2;i++)
{
    ll z;
cin>>z;
sum2=sum2+z;
}
ll ans2=sum1-sum2;
cout<<ans1<<endl;
cout<<ans2<<endl;

 
return 0;
}
