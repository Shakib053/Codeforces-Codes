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
  
  int a;
  cin>>a;
  int b=100-a;
  int g=__gcd(a,b);
  a=a/g;
  b=b/g;
  cout<<a+b<<endl;
   
   
}


return 0;
}
