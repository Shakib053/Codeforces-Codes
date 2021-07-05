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
  int c0=0,c1=0,c2=0;
  for(int i=0;i<n;i++)
  {
      if(a[i]%3==0)
      c0++;
      else if(a[i]%3==1)
      c1++;
      else if(a[i]%3==2)
      c2++;
  }
  int x=n/3;
  int ans=0;
  while (1)
  {
   if(c0==c1 && c1==c2 && c2==c0)
   break;
   if(c0>x)
   {
       c0--;
       c1++;
       ans++;
   }   
     if(c0==c1 && c1==c2 && c2==c0)
   break;
  if(c1>x)
  {
      c1--;
      c2++;
      ans++;
  }
  if(c0==c1 && c1==c2 && c2==c0)
   break;
   if(c2>x)
   {
       c2--;
       c0++;
       ans++;
   }
  if(c0==c1 && c1==c2 && c2==c0)
   break;
  
  }
  cout<<ans<<endl;
  
}


return 0;
}
