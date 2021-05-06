#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n,m,a,b,c=0;
cin>>n>>m;
for(int i=0;i<=max(n,m);i++)
{
    for(int j=0;j<=max(n,m);j++)
    {
        a=i*i+j;
        b=i+j*j;
        if(a==n && b==m)
        c++;
    }
}
cout<<c<<endl;
return 0;
}
