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
int n=s.size(),ans=0;
if(n==1)
ans=0;
else if(n==2)
{
    if(s[0]==s[1])
    ans=1;
    else
    ans=0;
}
else
{
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1] || (i>1 && s[i]==s[i-2]))
        s[i]='*';
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='*')
        ans++;
    }
   
}
 cout<<ans<<endl;
}


return 0;
}
