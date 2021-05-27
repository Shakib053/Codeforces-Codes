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
 int ans=0;
 for(int i=0;i<n-1;i++)
 {  
     double mx=max(a[i],a[i+1]);
     double mn=min(a[i],a[i+1]);
     double x=ceil(mx/mn);
      while (x>2)
         {   
             mn=2*mn;
             ans++;
             x=ceil(mx/mn);
            
         }

 }
 cout<<ans<<endl;
}


return 0;
}
