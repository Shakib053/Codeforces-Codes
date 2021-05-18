#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int cnt=0;
for(int i=0;i<n;i++)
{
    if(a[i]<=k)
    cnt++;
    else
    break;
}
int j=cnt;
for(int i=n-1;i>=j;i--)
{
    if(a[i]<=k)
    cnt++;
    else
    break;
}
cout<<cnt<<endl;


return 0;
}
