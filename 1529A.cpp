#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{ 
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
vector<int>v;
sort(a,a+n);
int x=a[0];
for(int i=0;i<n;i++)
{
    if(a[i]>x)
    v.push_back(a[i]);
}
cout<<v.size()<<endl;
}


return 0;
}
