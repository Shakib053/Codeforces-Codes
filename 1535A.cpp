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
int a[4];
for(int i=0;i<4;i++)
cin>>a[i];
int f1,f2;
if(a[0]>a[1])
f1=a[0];
else
f1=a[1];
if(a[2]>a[3])
f2=a[2];
else
f2=a[3];
sort(a,a+4);
if(f1==a[2] && f2==a[3])
cout<<"YES\n";
else if(f2==a[2] && f1==a[3])
cout<<"YES\n";
else
cout<<"NO\n";
}


return 0;
}
