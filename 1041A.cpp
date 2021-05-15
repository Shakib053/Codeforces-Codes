#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
un ll t;
cin>>t;
un ll a[t];
for(int i=0;i<t;i++)
cin>>a[i];
sort(a,a+t);
un ll ans=0;
for(int i=1;i<t;i++)
{
    if(a[i]-a[i-1]>1)
    ans=ans+(a[i]-a[i-1]-1);
}
cout<<ans<<endl;
return 0;
}
