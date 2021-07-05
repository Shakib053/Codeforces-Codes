#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll n,k;
cin>>n>>k;
string s;
cin>>s;
if(s=="1" && k==1)
cout<<0<<endl;
else if(s=="1" && k==0)
cout<<1<<endl;
else if(s=="0" && k==1)
cout<<0<<endl;
else if(s=="0" && k==0)
cout<<0<<endl;
else
{   
    ll j=k;
    for(ll i=0;i<n;i++)
    {
        if(i==n-1 && s[i]!=0 && j>0)
        {
          s[i]='0';
          j--;
        } 
    else if(i==0 && s[i]!='1' && j>0)
    {
    s[i]='1';
    j--;
    }
    if(i>0 && j>0)
    {
        if(s[i]!='0')
        {
        s[i]='0';
        j--;
        }
        
    }
    if(j==0)
    break;
    }
    cout<<s;
    cout<<endl;
}


return 0;
}
