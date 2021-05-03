#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
int a,b,n,flag;
cin>>a>>b>>n;
while (1)
{   
    if(n<__gcd(n,a))
    {
      break;
    }
    n=n-__gcd(n,a);
    flag=0;
    if(n<__gcd(n,b))
    {
      break;
    }
    
    n=n-__gcd(n,b);
    flag=1;
}

cout<<flag<<endl;


return 0;
}
