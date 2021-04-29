#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{ 
    ll int a,b,c,d;
    cin>>a>>b>>c>>d;
    ll int x,y,z;
    x=(a+b)/2;
    y=(b+c)/2;

    z=(c+d)/2;
    if(x+y<=z)
    cout<<b<<" "<<c<<" "<<c<<endl;
    else if(x+y>z)
    cout<<x<<" "<<y<<" "<<z<<endl;
    
   
}


return 0;
}
