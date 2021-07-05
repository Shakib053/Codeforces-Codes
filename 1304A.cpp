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
ll x,y,a,b;
cin>>x>>y>>a>>b;
ll distance=y-x;
ll check;
ll ans;
check=(distance%(a+b));
if(check==0)
ans=distance/(a+b);
else
ans=-1;
cout<<ans<<endl;


}


return 0;
}
