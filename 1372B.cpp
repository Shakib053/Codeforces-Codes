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
    ll int n,c=0;
    cin>>n;
    for(ll int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<n/i<<" "<<n-(n/i)<<endl;
            c=1;
            break;
        }
         else
         c=0;
    }
    if(c==0)
    cout<<1<<" "<<n-1<<endl;
        
    
    
}


return 0;
}
