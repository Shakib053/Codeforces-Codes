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
for(int i=0;i<n;i++)
cin>>a[i];
int ans=0;
for(int i=1;i<n-1;i++)
{
    if(a[i]==0 && a[i-1]==1 && a[i+1]==1)
    {
        ans++;
        a[i+1]=0;
    }
}

cout<<ans<<endl;
return 0;
}
