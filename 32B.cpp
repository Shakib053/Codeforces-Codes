#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
string s;
cin>>s;
string ans="";
for(int i=0;i<s.size();i++)
{
  if(s[i]=='.')
  ans=ans+(char)'0';
  else if(s[i]=='-' && s[i+1]=='.')
  {
    ans=ans+(char)'1';
    i++;
  }
 
  else if(s[i]=='-' && s[i+1]=='-')
  {
   ans=ans+(char)'2';
   i++;
  }
 
}
cout<<ans<<endl;
return 0;
}
