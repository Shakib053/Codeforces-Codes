#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n,a;
cin>>n>>a;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int ans=0;
vector<int>v1,v2;
for(int i=a-2;i>=0;i--)
{
    v1.push_back(arr[i]);
}
for(int i=a;i<n;i++)
{
    v2.push_back(arr[i]);
}
int maxi=max(v1.size(),v2.size());
int mini=min(v1.size(),v2.size());
for(int i=0;i<mini;i++)
{
   if(v1[i]==1 && v2[i]==1)
   {
       ans=ans+2;
   }
}
if(v1.size()>mini){
    for(int i=mini;i<v1.size();i++)
    {
    if(v1[i]==1)
    ans++;
   }
}
else if(v2.size()>mini){
    for(int i=mini;i<v2.size();i++)
    {
    if(v2[i]==1)
    ans++;
   }
}
if(arr[a-1]==1)
ans++;
cout<<ans<<endl;
return 0;
}
