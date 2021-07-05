#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll t;
cin>>t;
while (t--)
{
 ll n;
 cin>>n;
 ll a[n];
 set<ll>st;
 vector<ll>v;
 for(ll i=0;i<n;i++)
 {
     cin>>a[i];
     st.insert(a[i]);
     v.push_back(a[i]);
 }
 if(st.size()<2)
 cout<<-1<<endl;
 else
 {  
    sort(v.begin(),v.end());
     ll maxi=v[v.size()-1],ans;
     for(ll i=0;i<n;i++)
     {   
         if (i==0)
          {  
            if(a[i]==maxi && a[i]!=a[i+1])
            {
             ans=i+1;
             break;
            }
             
         }
         else if(i==n)
          { 
              if(a[i]==maxi && a[i]!=a[i-1])
              {
             ans=i+1;
             break;
              }
            
         }
         else
         {
         if(a[i]==maxi && (a[i]!=a[i+1] || a[i]!=a[i-1]))
         { 
             ans=i+1;
             break;
         }
         }
         
     }
     cout<<ans<<endl;
 }




}

 
return 0;
}
