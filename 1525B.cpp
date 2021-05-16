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
  
  int a;
  cin>>a;
  int arr[a],b[a];
  for(int i=0;i<a;i++)
  cin>>arr[i];
  for(int i=0;i<a;i++)
  b[i]=arr[i];
  sort(b,b+a);
  int flag=0;
  for(int i=0;i<a;i++)
  {
      if(arr[i]!=b[i])
      flag=1;
  }
  if(flag==0)
  cout<<0<<endl;
  else
  {
      if(arr[0]==b[0])
      cout<<1<<endl;
      else if(arr[a-1]==b[a-1])
      cout<<1<<endl;
      else if(arr[0]==b[a-1] && arr[a-1]==b[0])
      cout<<3<<endl;
      else if(arr[0]!=b[0] && arr[a-1]!=b[a-1])
      cout<<2<<endl;
      
  }
}


return 0;
}
