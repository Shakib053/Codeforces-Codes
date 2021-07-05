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
int aa[m];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<m;i++)
cin>>aa[i];
vector<int>v;
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
     if(aa[i]==a[j])
      {
      v.push_back(j);
      break;
      }
    }
}
sort(v.begin(),v.end());
for(auto i :v)
cout<<a[i]<<" ";
cout<<endl;
return 0;
}
