#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
double n;
cin>>n;
double ans=0;
double c1=1;
double c2=n;
for(int i=0;i<n;i++)
{
    ans=ans+(c1/c2);
    c2--;
}
cout<<fixed<<setprecision(8)<<ans<<endl;

return 0;
}
