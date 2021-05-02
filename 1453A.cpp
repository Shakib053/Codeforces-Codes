#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{ 
  int x,y;
  cin>>x>>y;
  int a[x];
  int b[y];
  for(int i=0;i<x;i++)
  cin>>a[i];
  for(int i=0;i<y;i++)
  cin>>b[i];
  int cnt=0;
  for(int i=0;i<x;i++)
  {
      for(int j=0;j<y;j++)
      {
          if(a[i]==b[j])
          cnt++;
      }
  }
  cout<<cnt<<endl;
   
}


return 0;
}
