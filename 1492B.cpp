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
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int pos[n]={0};
for(int i=0;i<n;i++)
pos[a[i]]=i;
vector<int>v;
int start=0;
int end=n;
for(int i=n;i>=0;i--)
{
  start=pos[i];
  if(end>start)
  {
      for(int k=start;k<end;k++)
      {
       v.push_back(a[k]);
      }
      end=start;
  }
}
for(auto i :v)
cout<<i<<" ";
cout<<endl;
}

return 0;
}
