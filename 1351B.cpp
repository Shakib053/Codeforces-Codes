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
   double a,b,a1,b1;
   cin>>a>>b>>a1>>b1;
   double c=min(a,b);
   double c1=min(a1,b1);
   double d=max(a,b);
   double d1=max(a1,b1);
   if(d==d1 && c+c1==d)
  // double ans=(a*b)+(a1*b1);
   //if(ceil(sqrt(ans))==floor(sqrt(ans)))
   cout<<"YES\n";
   else
   cout<<"NO\n";
  
   
}


return 0;
}
