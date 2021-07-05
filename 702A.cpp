#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
if(n==1)
cout<<1<<endl;
else
{
int ans=1,mx=0;
for(int i=0;i<n-1;i++)
{
  if(a[i+1]>a[i])
  ans++;
  else
  ans=1;
  mx=max(mx,ans);
}
cout<<mx<<endl;
}


return 0;
}
