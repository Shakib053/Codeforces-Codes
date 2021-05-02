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
    unsigned ll int n;
    cin>>n;
    if(n%2!=0)
    cout<<"NO\n";
    else
    {
    ll int x1=sqrt(n);
    ll int x2=sqrt(n/2);
    if(n==x1*x1 || n==2*x2*x2)
    cout<<"YES\n";
    else
    cout<<"NO\n"; 
    }
    
    

   
   
}


return 0;
}
