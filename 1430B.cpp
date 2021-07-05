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
   un ll n,k;
   cin>>n>>k;
   un ll a[n];
   for(un ll i=0;i<n;i++)
   cin>>a[i];
   sort(a,a+n);
   un ll j=n-2;
   for(un ll i=0;i<k;i++)
   {   
       a[n-1]=a[n-1]+a[j];
       a[j]=0;
       j--;
   }
   cout<<a[n-1]-a[n-2]<<endl;
}


return 0;
}
