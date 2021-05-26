#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int prime[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
int flag=0;
for(int i=0;i<15;i++)
{
    if(prime[i]==n && prime[i+1]==m)
    {
        flag=1;
        break;
    }
}
if(flag==1)
cout<<"YES\n";
else
cout<<"NO\n";
return 0;
}
