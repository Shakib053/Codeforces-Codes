#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{

int n,k;
cin>>n>>k;
vector<int> v;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
  if(5-a[i]>=k)
  v.push_back(a[i]);
}

if(v.size()<3)
cout<<0<<endl;
else
cout<<v.size()/3<<endl;
return 0;
}

