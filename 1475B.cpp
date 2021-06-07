#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll t;
cin>>t;
while (t--)
{  
  ll n;
  cin>>n;
  if(n%2021==0)
  cout<<"YES\n";
  else if(n%2020==0)
  cout<<"YES\n";
  else
  {  
      int flag=0;
      while (n>2020)
      {
          n=n-2021;
          if(n%2020==0)
          {
              flag=1;
              break;
          }
      }
      if(flag==1)
      cout<<"YES\n";
      else
      cout<<"NO\n";
      
  }
}
return 0;
}
