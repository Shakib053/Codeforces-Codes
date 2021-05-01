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
    int flag=0;
    while (n--)
    {
        int a[2][2];
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>a[i][j];
            }
        }
    
        if(a[1][0]==a[0][1])
        flag=1;   
    
    }
    if(flag==1 && m%2==0)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    
    
    
   
}


return 0;
}
