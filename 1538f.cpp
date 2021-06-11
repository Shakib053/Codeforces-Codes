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
 ll l,r;
 cin>>l>>r;
 ll a=l,b=r;
 while (l>0)
 { 
     l=l/10;
     a=a+l;
 }
 while (r>0)
 { 
     r=r/10;
     b=b+r;
 }
 cout<<b-a<<endl;
}


return 0;
}
