#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
int n,z,sum=0;
string s1,s2;
cin>>n>>s1>>s2;
for(int i=0;i<n;i++)
{
    z=abs(s1[i]-s2[i]);
    if(z>5)
    z=10-z;
    sum=sum+z;
}
cout<<sum<<endl;


return 0;
}
