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
 ll n,k,ans;
 cin>>n>>k;
 n=n-1;
 ans=(k-1)/n;
 ans=ans+k;
 cout<<ans<<endl;
  
}
return 0;
}
