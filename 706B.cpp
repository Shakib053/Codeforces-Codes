#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
    int n;
    cin>>n;
    ll a[n];
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
cin>>a[i];
v.push_back(a[i]);
    }
    
int q;
cin>>q;
sort(a,a+n);
sort(v.begin(),v.end());
while (q--)
{
    ll ans=0;
 ll m;
 cin>>m;
 vector<ll>::iterator it;
it=upper_bound(v.begin(),v.end(),m); 
ans=it-v.begin();
cout<<ans<<endl;


}

 
return 0;
}
