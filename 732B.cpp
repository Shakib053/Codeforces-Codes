#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
int k2,k3,k5,k6;
cin>>k2>>k3>>k5>>k6;
int a[3];
a[0]=k2;
a[1]=k5;
a[2]=k6;
sort(a,a+3);
int mn=a[0];
int ans;
ans=mn*256;
//cout<<ans<<endl;
k2=k2-mn;
int k=min(k2,k3);
ans=ans+(k*32);
cout<<ans<<endl;
return 0;
}
