#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;

int main()
{
ll n;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++)
cin>>a[i];
vector<ll>v1;
sort(a,a+n);
int flag=0;
for(ll i=0;i<n-2;i++)
{
    if(a[i]==a[i+1] && a[i+1]==a[i+2])
    {
        flag=1;
        break;
    }
}
if(flag==1)
cout<<"NO\n";
else
{   
    cout<<"YES\n";
    set<ll>s;
    for(ll i=0;i<n;i++)
   {
    if(s.count(a[i])==1)
    {
     v1.push_back(a[i]);
    }
    else
    {
        s.insert(a[i]);
    }
   }
   cout<<s.size()<<endl;
   for(auto i:s)
   cout<<i<<" ";
   cout<<endl;
   reverse(v1.begin(),v1.end());
   cout<<v1.size()<<endl;
   for(auto i:v1)
   cout<<i<<" ";
   cout<<endl;
   

}
return 0;
}
