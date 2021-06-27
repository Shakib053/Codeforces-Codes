#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
map<int,int>mp;
for(int i=0;i<n;i++)
{
cin>>a[i];
mp[a[i]]++;
}
int cnt=0;
for(auto i: mp)
{
    if(i.second%2==0)
    cnt=cnt+i.second;
    else if(i.second>=2)
    cnt=cnt+i.second-1;
}
cout<<cnt/4<<endl;

 
return 0;
}
