#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
int n,d;
cin>>n>>d;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int c=0;
for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {
    if(abs(a[i]-a[j])<=d)
    c++;
    }
    
}
cout<<c*2<<endl;


return 0;
}
