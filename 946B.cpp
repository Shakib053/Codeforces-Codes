#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll a,b,c1,c2;
cin>>a>>b;
while (a>0 && b>0)
{
    if(a>=2*b)
    {
        ll c1=a/(2*b);
        a=a-(c1*(2*b));
    }
    if(a==0 || b==0)
     break;
    if(b>=2*a)
    {
        ll c2=b/(2*a);
        b=b-(c2*(2*a));
    }
     if(a==0 || b==0)
     break;
    if((a/b)<2 && (b/a)<2)
    break;
}
cout<<a<<" "<<b<<endl;
return 0;
}
