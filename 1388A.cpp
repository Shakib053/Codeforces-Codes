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
  un ll n;
  cin>>n;
  if(n<31)
  cout<<"NO"<<endl;
  else if(n==36)
  {
  cout<<"YES\n";
  cout<<6<<" "<<10<<" "<<15<<" "<<5<<endl;
  }
  else if(n==40)
  {
  cout<<"YES\n";
  cout<<6<<" "<<10<<" "<<15<<" "<<9<<endl;
  }
  else if(n==44)
  {
   cout<<"YES\n";
   cout<<6<<" "<<10<<" "<<21<<" "<<7<<endl;
  } 
  else
  {
      cout<<"YES\n";
      un ll last=n-(6+10+14);
      cout<<6<<" "<<10<<" "<<14<<" "<<last<<endl;
  }
}
return 0;
}
