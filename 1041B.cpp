#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{

   un ll a,b,x,y;
   cin>>a>>b>>x>>y;
   un ll z=__gcd(x,y);
   x=x/z;
   y=y/z;
   a=a/x;
   b=b/y;
   cout<<min(a,b)<<endl;
  
return 0;
}
