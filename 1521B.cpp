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
    un ll n;
    cin>>n;
    un ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int mn=INT_MAX,c;
    for(int i=0;i<n;i++)
    {
        if(a[i]<mn)
        {
            mn=a[i];
            c=i;
        }
    }
    un ll s=-1;
    un ll ans=0;
   if(c%2!=0)
   {
     s=0;
     ans=(n+1)/2;
   }
   else
   {
       s=1;
       ans=n/2;
   }
    cout<<ans<<endl;
   for(int i=0;i<ans;i++)
   {
       cout<<c+1<<" "<<s+1<<" "<<a[c]<<" "<<mod<<endl;
       s=s+2;
   }
}


return 0;
}
