#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int power(int x, int y)
{
    int res = 1;
    while (y)
    {
        if (y % 2 == 1)
        res = (res * x);
        y=y/2;
        x = (x * x);
    }
    return res;
}
int main()
{
int t;
cin>>t;
while (t--)
{ 
   un ll a;
   cin>>a;
   un ll x=__builtin_popcountll(a);
   cout<<power(2,x)<<endl;
   
}


return 0;
}
