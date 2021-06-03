#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int fact(int n)
{
    if(n>1)
    return n*fact(n-1);
    else
    return 1;
}
int main()
{
ll a,b;
cin>>a>>b;
ll x=min(a,b);
cout<<fact(x)<<endl;

return 0;
}
