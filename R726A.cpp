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
 int n;
 cin>>n;
 int a[n];
 ll sum=0;
 for(int i=0;i<n;i++)
 {
      cin>>a[i];
     sum=sum+a[i];
 }
  if(sum<0)
 cout<<1<<endl;
 else if(sum>=n)
cout<<sum-n<<endl;
else if(sum<n)
cout<<1<<endl;
 




}


return 0;
}
