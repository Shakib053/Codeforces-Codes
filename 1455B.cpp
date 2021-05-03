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
    int sum=0;
    int i=1;
    while (sum<n)
    {
        sum=sum+i;
        i++;
    }
    if(sum==n+1)
    cout<<i<<endl;
    else
    cout<<i-1<<endl;
    
    
   
}


return 0;
}
