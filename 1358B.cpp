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
 for(int i=0;i<n;i++)
 cin>>a[i];
 sort(a,a+n);
 int ans;
 int flag=0;
 for(int i=n-1;i>=0;i--)
 {  
     if(a[i]<=i+1)
     {
      ans=i+2;
      flag=1;
      break;
     }
 }  
 if(flag==1)
 cout<<ans<<endl;
 else 
 cout<<1<<endl;
}


return 0;
}
