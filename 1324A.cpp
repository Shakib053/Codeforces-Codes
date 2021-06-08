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
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int flag=0,f=0;
    sort(a,a+n);
    for(int i=0;i<n;i++)
   {   
       if(i==0)
       {
        if(a[i]%2==0)
       flag=0;
       else
       {
           flag=1;
       }
       }
       else
       {
           if(a[i]%2==0 && flag==1)
           {
               cout<<"NO\n";
               f=1;
               break;
           }
           else if(a[i]%2==1 && flag==0)
           {
               cout<<"NO\n";
               f=1;
               break;
           }
       }
       
   }
   if(f==0)
   cout<<"YES\n";
}


return 0;
}
