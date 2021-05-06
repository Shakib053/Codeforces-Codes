#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long int
#define un unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n;
un ll d;
cin>>n>>d;
int cnt=0;
while (n--)
{ 
    char c;
    un ll x;
    cin>>c>>x;
    if(c=='+')
    d=d+x;
    else if(c=='-')
    {
        if(d<x)
        cnt++;
        else
        d=d-x;
    } 
}
cout<<d<<" "<<cnt<<endl;

return 0;
}
