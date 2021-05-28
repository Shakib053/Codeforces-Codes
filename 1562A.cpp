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
  int a[2*n];
  for(int i=0;i<2*n;i++)
  cin>>a[i];
  sort(a,a+(2*n));
  int ans[2*n];
  int small=0;
  int big=2*n-1;
  for(int i=1;i<=2*n;i++)
  {  
      if(i%2==1)
      {
ans[i]=a[small];
small++;
      }
      else
      {
        ans[i]=a[big];
        big--;
      }

  }
  for(int i=1;i<=2*n;i++)
  cout<<ans[i]<<" ";
  cout<<endl;
}


return 0;
}
