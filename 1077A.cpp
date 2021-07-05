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
  ll a,b,k,ans;
  cin>>a>>b>>k;
  if(k%2==0)
  ans=(k/2)*a-(k/2)*b;
  else
  {
      ans=((k/2)+1)*a-(k/2)*b;
  }
  cout<<ans<<endl;
}


return 0;
}
