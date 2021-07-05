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
  un ll n,m;
  cin>>n>>m;
  int a[n];
  un ll ans=0;
  for(int i=0;i<n;i++)
  {
      int x;
      cin>>x;
      ans=ans+x;
  }
  if(ans==m)
  cout<<"YES\n";
  else
  cout<<"NO\n";
}


return 0;
}
