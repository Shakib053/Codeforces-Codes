#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{ 
    int n;
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
        //cout<<endl;
    }
    int flag=0,aa,b,c,d;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]=='*' && flag==0)
            {
             aa=i;
             b=j;
             flag=1;
            }
            else if(a[i][j]=='*' && flag==1)
            {
             c=i;
             d=j;
             flag=1;
            }
        }
    }
    if(aa!=c && b!=d)
    {

    a[c][b]='*';
    a[aa][d]='*';
    }
    else if(aa==c)
    {   if(aa!=n-1 && c!=n-1)
        {
        a[n-1][b]='*';
        a[n-1][d]='*';
        }
        else
        {
        a[0][b]='*';
        a[0][d]='*';
        }
       
    }
    else if(b==d)
    {  
        if(b!=n-1 && d!=n-1)
        {
        a[aa][n-1]='*';
        a[c][n-1]='*';
        }
        else
        {
        a[aa][0]='*';
        a[c][0]='*';
        }
       
    }
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }

}


return 0;
}
