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
   ll n;
   cin>>n;
   set<ll>s;
   vector<ll>v,ans;
   int flag=0;
   for(int i=0;i<n;i++)
   {
       ll x;
       cin>>x;
       if(x<0)
       {
        flag=1;
       }
       v.push_back(x);
       s.insert(x);
   }
   if(flag==1)
   cout<<"NO\n";
   else
   {   
        
     cout<<"YES\n";
     sort(v.begin(),v.end());
     ll a=v[0];
     ll l=v[n-1];
   for(int i=0;i<=l;i++)
   {
       ans.push_back(i);
   }
   cout<<ans.size()<<endl;
   for(auto i:ans)
   cout<<i<<" ";
   cout<<endl;
   }

}
return 0;
}
