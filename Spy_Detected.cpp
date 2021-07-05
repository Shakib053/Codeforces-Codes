#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.1416
int main()
{    
    int t,n;
    cin>>t;
    while (t--)
    {   
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<n;i++)
        {
            if((a[i]!=a[i+1]) && (a[i+1]==a[i+2])){
            cout<<i<<endl;
            break;
            }
            else if
            ((a[i]!=a[i+1]) && (a[i+1]!=a[i+2])){
            cout<<i+1<<endl;
            break;
            }
        }
    }
    
    return 0;
}