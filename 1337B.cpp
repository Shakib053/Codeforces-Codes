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
  int x,n,m;
  cin>>x>>n>>m;
  if((x-(m*10)<=0))
  {
     cout<<"YES\n";
  }
  else
  {
    int flag=0;
   for(int i=0;i<n;i++)
     {
      x=(x/2)+10;
      if(x<=0)
       {
       flag=1;
       break;
       }
      
     }
     if(flag==0)
     x=x-(m*10);
     if(x<=0)
     cout<<"YES\n";
     else
     cout<<"NO\n";
  }
  //cout<<x<<endl;
  
}
return 0;
}
