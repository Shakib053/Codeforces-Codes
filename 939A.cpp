#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=1;i<=n;i++)
cin>>a[i];
int flag=0;
for(int i=1;i<=n;i++)
{
    if(a[a[a[i]]]==i)
    {
        flag=1;
        break;
    }
}
if(flag==1)
cout<<"YES\n";
else 
cout<<"NO\n";
return 0;
}
