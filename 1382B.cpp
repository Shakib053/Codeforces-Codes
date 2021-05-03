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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int c=1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==1)
        c++;
    }
    if(c==n && n%2!=0)
    cout<<"First\n";
    else if(c==n && n%2==0)
    cout<<"Second\n";
    else
    {
    int f;
    for(int i=0;i<n;i++)
    {
        if(a[i]>1)
        {   
            f=i+1;
            break;
        }
    }
    if(f%2!=0)
    cout<<"First\n";
    else
    cout<<"Second\n";
    }
    
   
}


return 0;
}
