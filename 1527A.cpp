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
while (t--)
{ 
 un ll n;
 cin>>n;
 un ll ans=log2(n);
 un ll a=pow(2,ans)-1;
 cout<<a<<endl; 
}


return 0;
}
