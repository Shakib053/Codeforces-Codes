#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
using namespace std;
int main()
{

char a='a';
string s;
cin>>s;
int ans=0,z;
for(int i=0;i<s.size();i++)
{
    if(i==0)
    z=abs(a-s[0]);
    else
    {
        z=abs(s[i-1]-s[i]);
    }
  if(z>13)
  ans=ans+(26-z);
  else 
  ans=ans+z;
}
cout<<ans<<endl;
return 0;
}
