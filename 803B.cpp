#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
ll int n;
cin>>n;
ll int a[n];
for(ll int i=1;i<=n;i++)
cin>>a[i];
 vector<int>ans;
for(ll int i=1;i<=n;i++)
{
    if(a[i]==0)
    ans.push_back(i);
}
ll int c=0;
for(ll int i=1;i<=n;i++)
{
    if(c+1<ans.size() && abs(ans[c]-i)>abs(ans[c+1]-i))
    c++;
    cout<<abs(ans[c]-i)<<" ";
}
cout<<endl;


return 0;
}
