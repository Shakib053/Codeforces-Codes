#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int pos=0,neg=0;
for(int i=0;i<n;i++)
{
    if(a[i]>=0)
    pos=pos+a[i];
    else
    neg=neg+a[i];
}
cout<<pos-neg<<endl;
return 0;
}
