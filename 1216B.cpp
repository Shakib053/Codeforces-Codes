#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++)
cin>>a[i];
pair<int,int>p[n];
for(int i=0;i<n;i++)
{
    p[i].first=a[i];
    p[i].second=i+1;
}
for(int i=0;i<n;i++)
b[i]=a[i];
sort(b,b+n);
int ans,j=1;
ans=1;
for(int i=n-2;i>=0;i--)
{
  ans=ans+((b[i]*j)+1);
  j++;
}
sort(p,p+n);
cout<<ans<<endl;
for(int i=n-1;i>=0;i--)
cout<<p[i].second<<" ";
cout<<endl;
return 0;
}
