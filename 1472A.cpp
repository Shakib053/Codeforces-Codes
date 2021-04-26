#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int fn(int x,int y)
{
    int c=1;
    while (x%2==0)
    {
        c=c*2;
        x=x/2;
    }
     while (y%2==0)
    {
        c=c*2;
        y=y/2;
    }
    
    return c;
}
int main()
{
int t;
cin>>t;
while (t--)
{ 
    int w,h,n;
    cin>>w>>h>>n;
    if(n==1)
    cout<<"YES\n";
    else
    {
        if(w%2!=0 && h%2!=0)
        cout<<"NO\n";
        else if(fn(w,h)>=n)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
   
}


return 0;
}
