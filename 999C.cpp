#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n,k;
string s;
cin>>n>>k>>s;

for(int i=97;i<=122;i++)
{
    for(int j=0;j<n && k ;j++)
    {
        if(s[j]==i)
        {
            s[j]=0;
            k--;
        }
    }
}
for(int j=0;j<n;j++)
{
if(s[j]!=0)
cout<<s[j];
}


return 0;
}
