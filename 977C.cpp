#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll n,k;
cin>>n>>k;
ll a[n];
for(ll i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
if(k==0 && a[0]==1)
cout<<-1<<endl;
else if(k==0 && a[0]>=2)
cout<<a[0]-1<<endl;
else if(a[k-1]!=a[k])
cout<<a[k-1]<<endl;
else
cout<<-1<<endl;
return 0;
}
