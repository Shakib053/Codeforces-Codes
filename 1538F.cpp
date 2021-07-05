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
 ll sum=0;
 while (l!=0 || r!=0)
 {
     sum=sum+(r-l);
     l=l/10;
     r=r/10;
 }
 cout<<sum<<endl;
}


return 0;
}
