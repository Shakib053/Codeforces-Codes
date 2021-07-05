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
  string s;
  cin>>s;
  int c=min(n,m);
  vector<int>v;
  while (c--)
  {
      for(int i=0;i<n;i++)
      {
          if(i==0)
          {
              if(s[i]=='0' && s[i+1]=='1')
              v.push_back(i);
          }
          else if(i>0 && i<n-1)
          {
              if(s[i]=='0' && s[i-1]=='1' && s[i+1]=='0')
              v.push_back(i);
              else if(s[i]=='0' && s[i-1]=='0' && s[i+1]=='1')
              v.push_back(i);
          }
          else
          {
              if(s[i]=='0' && s[i-1]=='1')
              v.push_back(i);
          }
      }
      for(auto i:v)
      s[i]='1';
  }
  
  cout<<s<<endl;
  
}


return 0;
}
