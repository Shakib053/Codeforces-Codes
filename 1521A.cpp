#include<bits/stdc++.h>
#include<iterator>
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
    un ll a,b;
    cin>>a>>b;
    un ll z=a*b;
    if(b==1)
    cout<<"NO\n";
    else 
    {
        cout<<"YES\n";
        if((z-a)!=a)
        cout<<a<<" "<<z-a<<" "<<z<<endl;
        else
        cout<<a<<" "<<2*z-a<<" "<<2*z<<endl;
    }
    
     
   
}

return 0;
}
