#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
un ll a,b,c,ans;
cin>>a>>b>>c;
if(a==b)
{
    ans=2*c+a+b;
}
else
{
    ans=2*c+min(a,b)*2+1;
}
cout<<ans<<endl;
return 0;
}
