#include<bits/stdc++.h>
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
   vector<int>v;
   int n=s.size();
   int d=0;
   v.push_back(0);
     for(int i=0;i<n;i++)
     {
        if(s[i]=='R')
        v.push_back(i+1);
     }
     v.push_back(n+1);
    for(int i=1;i<v.size();i++)
     {
        d=max(d,(v[i]-v[i-1]));
     }

   cout<<d<<endl;
}


return 0;
}
