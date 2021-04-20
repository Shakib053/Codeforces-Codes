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
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     sort(a,a+n);
     int c=0;
     for(int i=0;i<n-1;i++)
     {    
         int z=abs(a[i]-a[i+1]);
         if(z>1)
         {
         cout<<"NO\n";
         c=1;
         break;
         }
         
     }
     if(c==0)
     cout<<"YES\n";
 }
 
return 0;
}

