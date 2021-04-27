#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
int n;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
b[i]=a[i];
int s=0,d=0;
int i=0,j=n-1;
if(n%2!=0)
{
while (i<j)
{
    if(a[i]>a[j]) s=s+a[i],i++;
    else s=s+a[j],j--;
    if(a[i]>a[j]) d=d+a[i],i++;
    else d=d+a[j],j--;
   
}
sort(b,b+n);
s=s+b[0];
}
else
{
    while (i<j)
{
    if(a[i]>a[j]) s=s+a[i],i++;
    else s=s+a[j],j--;
    if(a[i]>a[j]) d=d+a[i],i++;
    else d=d+a[j],j--;
    
}
}

cout<<s<<" "<<d<<endl;


return 0;
}
