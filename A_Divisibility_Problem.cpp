#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
int main()
{   
int t;
cin>>t;
while (t--)
{
    ll int a,b;
    cin>>a>>b;
    ll int c=(a/b)+1;
    int ans=(b*c)-a;
    if(a%b==0)
    cout<<0<<endl;
    else
    cout<<ans<<endl;
}

return 0;
}

