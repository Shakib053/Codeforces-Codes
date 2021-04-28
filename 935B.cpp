#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
int n;
cin>>n;
string s;
cin>>s;
int rg=0,up=0,cnt=0;
for(int i=0;i<s.size()-1;i++)
{
    if(s[i]=='R')
    rg++;
    else
    up++;
    if(s[i]==s[i+1] && rg==up)
    cnt++;
}
cout<<cnt<<endl;
return 0;
}
