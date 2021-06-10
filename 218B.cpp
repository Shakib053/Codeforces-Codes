#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
vector<un ll>v,v1;
for(int i=0;i<m;i++)
{
    int x;
    cin>>x;
    v.push_back(x);
    v1.push_back(x);
}
int mini=0,maxi=0;
for(int i=0;i<n;i++)
{
  sort(v.begin(),v.end());
  for(int j=0;j<v.size();j++)
  {
   if(v[j]>0)
   {
       mini=mini+v[j];
       v[j]=v[j]-1;
       break;
   }
  }
}
for(int i=0;i<n;i++)
{
  sort(v1.begin(),v1.end());
  for(int j=v1.size()-1;j>=0;j--)
  {
   if(v1[j]>0)
   {  
       maxi=maxi+v1[j];
       v1[j]=v1[j]-1;
       break;
   }
  }
}
cout<<maxi<<" "<<mini<<endl;



return 0;
}
