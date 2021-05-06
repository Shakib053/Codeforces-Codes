#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
double d,e,a,b,c,f,n;
cin>>a>>b>>c>>d>>e>>f>>n;
double a1=ceil((a+b+c)/5);
double a2=((d+e+f)/10);
if(a1+a2<=n)
cout<<"YES\n";
else
cout<<"NO\n";

return 0;
}
