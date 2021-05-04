#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{ 
    int n,c0,c1,h;
    string s;
    cin>>n>>c0>>c1>>h>>s;
    int p;
    vector<int> v;
   int khoroch=0,one=0,zero=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        khoroch=khoroch+c1;
        else
        khoroch=khoroch+c0;
    }
   v.push_back(khoroch);
   khoroch=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        khoroch=khoroch+h;
    }
       for(int i=0;i<s.size();i++)
    {
        khoroch=khoroch+c0;
    }
    v.push_back(khoroch);
       khoroch=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        khoroch=khoroch+h;
    }
       for(int i=0;i<s.size();i++)
    {
        khoroch=khoroch+c1;
    }
    v.push_back(khoroch);
    sort(v.begin(),v.end());
   cout<<v[0]<<endl;
   
}


return 0;
}
