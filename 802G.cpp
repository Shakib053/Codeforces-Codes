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
int j=0,c=0;
string ans="heidi";
for(int i=0;i<s.size();i++)
{
  if(s[i]==ans[j])
  {
      c++;
      j++;
  }   
}
if(c==5)
cout<<"YES\n";
else
cout<<"NO\n";
return 0;
}
