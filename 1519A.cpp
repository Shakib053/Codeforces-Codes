#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{ 
 ll int  r,b,d;
  	cin>>r>>b>>d;
  if(abs(r-b)<=d)
  cout<<"YES\n";
  else
  {
  ll int mx=max(r,b);
  ll int mn=min(r,b);
  ll int ans=mn*(d+1);
  if(ans>=mx)
  cout<<"YES\n";
  else
  cout<<"NO\n"; 
  }
  
}


return 0;
}
