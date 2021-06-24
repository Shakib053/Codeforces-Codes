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
 ll n,x,t;
 cin>>n>>x>>t;
 ll z=min(n-1,t/x);
 ll ans=n*z;
 ans=ans-((z*(z+1))/2);
cout<<ans<<endl;




}

 
return 0;
}
