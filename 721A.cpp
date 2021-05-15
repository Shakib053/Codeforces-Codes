#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n;
string s;
cin>>n>>s;
int k=0,b=0;
vector<int>v;
for(int i=0;i<s.size();i++)
{
    if(s[i]=='B')
    k++;
    else if(s[i]=='W' && k>0)
    {
        b++;
        v.push_back(k);
        k=0;
    }
    if(i==s.size()-1 && k>0)
    {
        b++;
        v.push_back(k);
    }
}
if(b>0)
{
    cout<<b<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
}
else
cout<<b<<endl;
return 0;
}
