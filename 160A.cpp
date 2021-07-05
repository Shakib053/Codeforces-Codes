#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n,sum=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
sum=sum+a[i];
}
sort(a,a+n);
int cnt=0,sum1=0;
for(int i=n-1;i>=0;i--)
{
   sum1=sum1+a[i];
   cnt++;
   if(sum1>(sum/2))
   break;
}
cout<<cnt<<endl;
return 0;
}
