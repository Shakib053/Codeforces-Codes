#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
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
    int a[n],b[m];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<m;i++)
    cin>>b[i];
    int flag=0,f;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
             f=a[i];
             flag=1;
             break;
            }
        }
        if(flag==1)
        break;
    }
    if(flag==0)
    cout<<"NO\n";
    else
    cout<<"YES\n"<<"1"<<" "<<f<<endl;
   
}


return 0;
}
