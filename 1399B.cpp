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
     ll int n;
     cin>>n;
     ll int a[n],c[n];
     ll int b[n],d[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     for(int i=0;i<n;i++)
     {
         cin>>b[i];
     }
     for(int i=0;i<n;i++)
     {
         c[i]=a[i];
         d[i]=b[i];
     }
     sort(a,a+n);
     sort(b,b+n);
     ll int x=a[0];
     ll int y=b[0];
     ll int sum=0;
     for(int i=0;i<n;i++)
     {
         sum=sum+max((c[i]-x),(d[i]-y));
     }
     cout<<sum<<endl;
         
 }
 

return 0;
}

