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
int aa[n-1];
for(int i=1;i<n;i++)
cin>>aa[i];
int a,b;
cin>>a>>b;
int ans=0;
for(int i=a;i<b;i++)
ans=ans+aa[i];
cout<<ans<<endl;
return 0;
}
