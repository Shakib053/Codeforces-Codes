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
string s,ans,ans2;
cin>>s;
ans=s+'a';
int f=0;
for(int i=0;i<ans.size();i++)
{
if(ans[i]!=ans[ans.size()-i-1])
f=1;
}
if(f==1)
{    cout<<"YES"<<endl;
    cout<<ans<<endl;
}
else if(f==0)
{
ans2='a'+s;
for(int i=0;i<ans2.size();i++)
{
if(ans[i]!=ans2[ans2.size()-i-1])
f=1;
}
if(f==1)
{
    cout<<"YES"<<endl;
    cout<<ans2<<endl;
}

else
cout<<"NO\n";
}


}


return 0;
}
