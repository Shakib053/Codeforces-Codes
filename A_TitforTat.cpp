#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
int main()
{   
 int t;
 cin>>t;
 while (t--)
 {
     int n,k;
     cin>>n>>k;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
      for(int i=0;i<n-1;i++)
     {   
      while (k!=0 && a[i]!=0)
      {
          a[i]=a[i]-1;
          a[n-1]=a[n-1]+1;
          k=k-1;
      }
        
     }
    for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }
     cout<<endl;
 }
 

return 0;
}

