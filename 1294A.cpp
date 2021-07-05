#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{ 
  unsigned ll int a[3];
  unsigned ll int n,diff1,diff2,sum;
  for(int i=0;i<3;i++)
  cin>>a[i];
  cin>>n;
  sort(a,a+3);
  diff1=a[2]-a[0];
  diff2=a[2]-a[1];
  sum=diff1+diff2;
  if(sum>n)
  cout<<"NO\n";
  else
  {
   unsigned ll int x=n-sum;
  if(x%3==0)
   cout<<"YES\n";
   else
   cout<<"NO\n";
  }
  


}


return 0;
}
