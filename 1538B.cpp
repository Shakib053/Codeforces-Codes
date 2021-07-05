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
 int b[n];
 for(int i=0;i<n;i++)
 {
     int x;
     cin>>x;
  a[i]=x;
  b[i]=x;
 }
ll sum=0;
 sort(b,b+n);
 int ans=0;
 int maxi=b[n-1];
for(int i=0;i<n;i++)
 {
     sum=sum+a[i];
 }
 ll avg=sum/n;
if(sum%n!=0)
cout<<-1<<endl;
else
{
for(int i=0;i<n;i++)
 {
   if(a[i]>avg)
    ans++;
 }
 cout<<ans<<endl;
}

}
return 0;
}
