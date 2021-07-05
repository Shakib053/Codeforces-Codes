#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
set<int>s;
for(int i=0;i<n;i++)
{   
    cin>>a[i];
    s.insert(a[i]);
}
sort(a,a+n);
int ans=0;
int check=1;
for(int i=0;i<n;i++)
{
    if(a[i]>=check)
    {
        ans++;
        check++;
    }
}
cout<<ans<<endl;


return 0;
}
