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
   un ll n;
   cin>>n;
 
   while (1)
   {  
       un ll  sum=0;
        un ll a=n;
        while (a>0)
        {
       sum=sum+(a%10);
       a=a/10;
         }
        if( __gcd(sum,n)>1)
        {
         break;
        }
         n++;

   }
   
 
   cout<<n<<endl;
   
  
   
}


return 0;
}
