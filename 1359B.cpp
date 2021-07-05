#include<bits/stdc++.h>
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
 int n,m,x,y;
 cin>>n>>m>>x>>y;
 char a[n][m];
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     cin>>a[i][j];
 }
 int ans1=0,ans2=0;
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     {
      
      if(a[i][j]=='.')
      ans1=ans1+x;
     }
 }
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m-1;j++)
     {
      
      
      if(a[i][j]=='.' && a[i][j+1]=='.')
      {
        ans2=ans2+y;
        a[i][j]='*';
        a[i][j+1]='*';
      }
      else if(j==m-2 && a[i][j]=='*' && a[i][j+1]=='.')
      {
          ans2=ans2+x;
      }
      else if(a[i][j]=='.' && a[i][j+1]=='*')
      {
         ans2=ans2+x;
         a[i][j]='*';
      }
   

     }
 }
//  cout<<ans1<<" "<<ans2<<endl;
  if(ans1==0 && ans2==0)
  cout<<0<<endl;
  else if(ans1==0 && ans2!=0)
  cout<<ans2<<endl;
  else if(ans2==0 && ans1!=0)
  cout<<ans1<<endl;
 else if(ans1>ans2 && ans2!=0)
 cout<<ans2<<endl;
 else if(ans2>=ans1 && ans1!=0)
 cout<<ans1<<endl;
}


return 0;
}
