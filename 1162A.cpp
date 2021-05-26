#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n,h,m;
cin>>n>>h>>m;
int a[n];
for(int i=0;i<n;i++)
a[i]=h;
un ll ans=0;
int mx=INT_MAX;
while (m--)
{
    int l,r,x;
    cin>>l>>r>>x;
    for(int i=l-1;i<r;i++)
    {   
        a[i]=min(x,a[i]);
    }
}
for(int i=0;i<n;i++)
ans=ans+(a[i]*a[i]);
cout<<ans<<endl;

return 0;
}
