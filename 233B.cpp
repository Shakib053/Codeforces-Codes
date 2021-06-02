#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
ll count(ll n)
{

   un ll sum=0,add=n;
while (add>0)
  { 
  sum=sum+add%10;
  add=add/10;
  }
    return sum;
}

int main()
{
un ll n,flag=0;
cin>>n;
un ll sq=floor(sqrt(n));
for(ll i=sq;i>0 && sq-i<=1000;i--)
{
    un ll x=count(i);
    if((i*i)+x*i-n==0)
    {
       cout<<i<<endl;
       flag=1;
       break;
    }
}
if(flag==0)
cout<<-1<<endl;


return 0;
}
