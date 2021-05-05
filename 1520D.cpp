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
   ll int n;
    cin>>n;
   ll int a[n];
    for(ll int i=1;i<=n;i++)
    cin>>a[i];
   ll int c=1;
    vector<ll int>v;
    for(ll int i=1;i<=n;i++)
   {
      v.push_back(a[i]-i);
   }
   sort(v.begin(),v.end());
   ll int ans=0;
   for(ll int i=0;i<v.size()-1;i++)
   {
       if(v[i]==v[i+1])
       c++;
       if(v[i]!=v[i+1] || i==v.size()-2)
       {
           ans=ans+(c*(c-1)/2);
           c=1;
       }
   } 
   cout<<ans<<endl;
}


return 0;
}
