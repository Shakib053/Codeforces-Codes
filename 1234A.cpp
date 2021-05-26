#include<bits/stdc++.h>
#include<iterator>
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
un ll n;
cin>>n;
un ll a[n];
un ll sum=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    sum=sum+a[i];
}

un ll ans=sum/n;
if(sum%n==0)
cout<<ans<<endl;
else
cout<<ans+1<<endl;
}


return 0;
}
