#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
vector<int>v;
int x;
int f=0;
for(int i=0;i<n;i++)
{  
    x=a[i];
  if(find(v.begin(),v.end(),x)!=v.end())
  {
     f=1;
  }
  else
  { 
      if(v.size()>=k)
      {
          v.pop_back();
      }
      
      v.insert(v.begin(),x);
  }

}
//reverse(v.begin(),v.end());
cout<<v.size()<<endl;
for(auto it : v)
cout<<it<<" ";
cout<<endl;

return 0;
}
