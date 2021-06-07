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
  int n,q;
  cin>>n>>q;
  string s;
  cin>>s;
  while (q--)
  {
      int l,r;
      cin>>l>>r;
      int flag=0;
      for(int i=0;i<l-1;i++)
      {
          if(s[i]==s[l-1])
          {
              flag=1;
              break;
          }
      }
      for(int i=r;i<n;i++)
      {
          if(s[i]==s[r-1])
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
