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
ll ans=0;
ll mx0=0,mx1=0;
for(int i=0;i<s.size();i++)
{
    if(s[i]=='0')
    {
        mx0++;
        mx1=0;
        ans=ans+mx0;
    }
    else if(s[i]=='1')
    {
        mx1++;
        mx0=0;
        ans=ans+mx1;
    }
    else
    {
        mx0++;
        mx1++;
        ans=ans+max(mx0,mx1);
    }
    swap(mx0,mx1);
}
cout<<ans<<endl;
}


return 0;
}
