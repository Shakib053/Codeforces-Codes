#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int a[200009];
int cnt[200009];

int main()
{
int n,m;
cin>>n>>m;
int a[n][m];
int b[n][m];
vector<int>v1,v2;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
        if(i==j)
        v1.push_back(a[i][j]);
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>b[i][j];
        if(i==j)
        v2.push_back(b[i][j]);
    }
}

int size=v1.size();
int flag=0;
for(int i=0;i<size;i++)
{
    sort(v1[i].begin(),v1[i].end());
sort(v2[i].begin(),v2[i].end());
if(v1[i]!=v2[i])
{
    flag=1;
    break;
}
}
if(flag==1)
{
    cout<<"NO\n";
}
else
{
    cout<<"YES\n";
}


return 0;
}
