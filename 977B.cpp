#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n;
cin>>n;
string s;
cin>>s;
map<string,int>mp;
for(int i=0;i<n-1;i++)
{ 
    string ans="";
    ans=ans+s[i];
    ans=ans+s[i+1];
    mp[ans]++;
}
string st="";
int mx=-1;
// for(auto i : mp)
// cout<<i.first<<" "<<i.second<<endl;
for(auto i : mp)
{
 int x=i.second;
 mx=max(x,mx);
 if(x>=mx)
 st=i.first;
}
cout<<st<<endl;
return 0;
}
