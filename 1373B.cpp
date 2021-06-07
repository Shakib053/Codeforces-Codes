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
  string s;
  cin>>s;
  int z=0,one=0;
  for(int i=0;i<s.size();i++)
  {
      if(s[i]=='1')
      one++;
      else
      z++;
  }
  int cnt=min(z,one);
  if(cnt%2==1)
  cout<<"DA\n";
  else
  cout<<"NET\n";
}
return 0;
}
