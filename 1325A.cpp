#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{ 
    int n,flag=0;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<n/i<<" "<<n-(n/i)<<endl;
            flag=1;
            break;
        }
        else
        flag=0;
    }
    if(flag==0)
    cout<<1<<" "<<n-1<<endl;
   
}


return 0;
}
