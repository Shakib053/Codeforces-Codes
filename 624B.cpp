#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
un ll n;
cin>>n;
un ll a[n];
for(un ll i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
un ll sum=0;
set<int>s;
int j=1;
for(un ll i=0;i<n;i++)
{
    if(s.count(a[i])==1)
   {   
       for(int j=a[i]-1;j>=0;j--)
       {
           if(s.count(j)==0)
           {
               s.insert(j);
               break;
           }
       }
   }
   else
   {
       s.insert(a[i]);
   }
}
for(auto it:s)
sum=sum+it;
cout<<sum<<endl;

return 0;
}
