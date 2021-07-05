#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
int c=1,mx=-1,flag=0;
for(int i=0;i<n-1;i++)
{
    if(a[i]==a[i+1])
    {
        c++;
        flag=1;
        mx=max(mx,c);
    }
    else
    c=1;
}
if(flag==1)
cout<<mx<<endl;
else
cout<<c<<endl;
return 0;
}
