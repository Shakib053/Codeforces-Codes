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
   un ll n,a,b;
   cin>>n>>a>>b;
  cout<<(n/2)*min(2*a,b)+(n%2)*a<<endl;
}


return 0;
}
