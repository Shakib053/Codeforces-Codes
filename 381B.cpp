#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
vector<int>v1(5002),v2;
for(int i=0;i<n;i++)
{
  int x;
  cin>>a[i];
}
for(int i=0;i<n;i++)
{
   int x=a[i];
   v1[x]++;
}
for(int i=0;i<5001;i++)
{
  if(v1[i]>0)
  v2.push_back(i);
  v1[i]--;
}
for(int i=5001;i>=0;i--)
{
  if(v1[i]>0 && v2.back()!=i)
  v2.push_back(i);
  v1[i]--;
}
cout<<v2.size()<<endl;
for(int i=0;i<v2.size();i++)
{
  cout<<v2[i]<<" ";
}
cout<<endl;
return 0;
}
