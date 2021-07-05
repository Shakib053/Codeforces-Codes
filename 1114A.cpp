#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
int x,y,z,a,b,c;
cin>>x>>y>>z>>a>>b>>c;
if(x>a)
{
cout<<"NO\n";
return 0;
}
int k;
k=a-x;
if(k+b>=y && (c+(k+b-y))>=z)
cout<<"YES\n";
else
cout<<"NO\n";


return 0;
}
