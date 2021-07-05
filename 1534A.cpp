#include<bits/stdc++.h>
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
 int n,m;
 cin>>n>>m;
 char a[n][m];
 int flag=0;
 int ii,jj;
char ch;
int final_check=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
        if(flag==0 && a[i][j]!='.')
        ii=i,jj=j,flag=1,ch=a[i][j];
    }
}

if(flag==0)
{
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if((i+j)%2==1)
        a[i][j]='W';
        else
        a[i][j]='R';
    }
}
}
else
{
if((ii+jj)%2==0)
{
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if((i+j)%2==0 && a[i][j]=='.')
        a[i][j]=ch;
        if((i+j)%2!=0 && a[i][j]=='.')
        {
        if(ch=='R')
         a[i][j]='W';
         else
          a[i][j]='R';
        }
       
    }
}
}
else
{
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if((i+j)%2!=0 && a[i][j]=='.')
        a[i][j]=ch;
        if((i+j)%2==0 && a[i][j]=='.')
        {
        if(ch=='R')
         a[i][j]='W';
         else
          a[i][j]='R';
        }
       
    }
}
}
char ck=a[0][0];
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if((i+j)%2==0 && a[i][j]==ck)
        continue;
        if((i+j)%2!=0 && a[i][j]!=ck)
        continue;
        else
        final_check=1;
    }
    if(final_check==1)
    break;
}
}
if(flag==0)
{
    cout<<"YES\n";
    for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        cout<<a[i][j];
    }
    cout<<endl;
   }
}
else if(final_check==1)
cout<<"NO\n";
else
{
    cout<<"YES\n";
    for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        cout<<a[i][j];
    }
    cout<<endl;
   }
}
}


return 0;
}
