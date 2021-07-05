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
 int n,m;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 cin>>a[i];
 cin>>m;
 int b[m];
 for(int i=0;i<m;i++)
 cin>>b[i];
 int in1=-1,in2=-1;
 int ans=0;
 int f1=0,fl=0,s1=0,sl=0;
 for(int i=0;i<n;i++)
 {   
     if(a[i]<0)
     {
         fl=fl+a[i];
     }
     else if(a[i]>0 && fl<0)
     {
     f1=f1+a[i];
     }
     if(a[i]>0 && f1+fl>=0)
     {
    in1=i;
    f1=0;
    fl=0;
     }
     
 }
for(int i=0;i<m;i++)
 {
     if(b[i]<0)
     {
         sl=sl+b[i];
     }
     if(b[i]>0 && sl<0)
     {
     s1=s1+b[i];
     }
     if(b[i]>0 && s1+sl>=0)
     {
   in2=i;
   s1=0;
   sl=0;
     }
     
 }
for(int i=0;i<=in1;i++)
 {  
    ans=ans+a[i];
 }
for(int i=0;i<=in2;i++)
 {
    ans=ans+b[i];
 }
cout<<ans<<endl;


}


return 0;
}
