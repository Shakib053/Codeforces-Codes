#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
double d,l,v1,v2;
cin>>d>>l>>v1>>v2;
double ans=(l-d)/(v1+v2);
cout<<fixed<<setprecision(10)<<ans<<endl;


return 0;
}
