#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
int mx=max(a,b);
mx=6-mx+1;
int num,deno;
if(6%mx==0)
{
    deno=6/mx;
    num=mx/mx;
    cout<<num<<"/"<<deno<<endl;
}
else if(mx%2==0)
{
    num=mx/2;
    deno=6/2;
    cout<<num<<"/"<<deno<<endl;
}
else
cout<<mx<<"/"<<6<<endl;
return 0;
}
