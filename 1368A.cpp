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
    unsigned ll int a,b,n,c=0;
    cin>>a>>b>>n;
    if(a>b)
    swap(a,b);
    while (1)
    {
        a=a+b;
        c++;
        if(a>n)
        break;
        b=b+a;
        c++;
        if(b>n)
        break;
        
    }
    cout<<c<<endl;
    
}


return 0;
}
