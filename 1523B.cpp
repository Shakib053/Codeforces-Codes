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
  un ll a[n];
  for(int i=1;i<=n;i++)
  cin>>a[i];
  vector<pair<int,pair<int,int>>>v;
  for(int i=1;i<=n;i=i+2)
  {
      v.push_back({1,{i,i+1}});
      v.push_back({2,{i,i+1}});
      v.push_back({1,{i,i+1}});
      v.push_back({2,{i,i+1}});
      v.push_back({1,{i,i+1}});
      v.push_back({2,{i,i+1}});
  }
  cout<<v.size()<<endl;
  for(int i=0;i<v.size();i++)
  cout<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;
}


return 0;
}
