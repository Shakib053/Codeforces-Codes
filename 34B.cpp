#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int a[n];
vector<int>v;
for(int i=0;i<n;i++)
{
   cin>>a[i];
}
sort(a,a+n);
int ans=0;
for(int i=0;i<m;i++)
{
    if(a[i]<0)
  ans=ans+a[i];
}

cout<<ans*(-1)<<endl;

return 0;
}
