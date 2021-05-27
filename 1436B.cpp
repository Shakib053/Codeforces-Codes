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
  un ll n;
  cin>>n;
  un ll ans[n][n];
  int flag=0;
  for(int i=2;i<=sqrt(n);i++)
  {
      if(n%i==0)
      {
          flag=1;
          break;
      }
  }
  if(flag==0)
  {
      for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans[i][j]=1;
            }
        }
  }
  else
  {  
      for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {   
                if(i==j)
                ans[i][j]=1;
                else
                ans[i][j]=0;
            }
        }
    for(int i=0;i<n;i++)
    ans[i][n-i-1]=1;
      if(n%2!=0)
      {  
        ans[n/2-1][n/2]=1;
        ans[n/2][n/2+1]=1;
         
      }
      
  }
  for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
  
}


return 0;
}
