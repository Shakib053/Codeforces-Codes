#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int a[200009];
int cnt[200009];

int main()
{
int n,k;
cin>>n>>k;
int  ans=6;
if(k==1)
ans=ans+(n-2)*3;
else if(k==n)
ans=ans+(n-2)*3;
else if(k<=(n/2))
{
    ans=ans+(k-2)*3;
    ans=ans+k+(n-k)*3-1;
}
else
{
    ans=ans+(n-k-2)*3;
    ans=ans+(k)*3+(n-k);
}

cout<<ans<<endl;

return 0;
}
