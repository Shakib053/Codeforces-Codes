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
 sort(b,b+n);
 int mini=b[0];
 int maxi=b[n-1];
 int posmin,posmax;
 for(int i=0;i<n;i++)
 {
   if(mini==a[i])
   posmin=i+1;
   if(maxi==a[i])
   posmax=i+1;
 }
 int ans1=max(posmin,posmax);
 int ans2=max((n-posmin),(n-posmax))+1;
 int ans3=min(posmin,posmax)+ n-max(posmin,posmax)+1;
 
 vector<int>late;
 late.push_back(ans1);
 late.push_back(ans2);
 late.push_back(ans3);
 sort(late.begin(),late.end());
 cout<<late[0]<<endl;
// cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
}


return 0;
}
