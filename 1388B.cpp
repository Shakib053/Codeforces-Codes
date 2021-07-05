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
  int n,k,x;
  cin>>n;
  if(n%4!=0)
  x=(n/4)+1;
  else
  x=(n/4);
  for(int i=0;i<n-x;i++)
  cout<<9;
  for(int i=0;i<x;i++)
  cout<<8;
  cout<<endl;
}


return 0;
}
