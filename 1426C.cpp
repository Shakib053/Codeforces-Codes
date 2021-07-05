#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
  int t;
  cin>>t;

while (t--)
{ 
    ll int n;
    cin>>n;
    int z=sqrt(n);
    if(z*z>=n)
    cout<<z+z-2<<endl;
    else if((z+1)*z>=n)
    cout<<z+z-1<<endl;
    else
    cout<<z+z<<endl;
}


return 0;
}
