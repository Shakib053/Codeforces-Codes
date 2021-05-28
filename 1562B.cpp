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
  ll n;
  cin>>n;
    int flag=0;
   while (n>0)
      {  
    
         if(n%11==0 || n%111==0)
           {
        flag=1;
        break;
           }
          n=n-111;
          
      }
    if(flag==1)
    cout<<"YES\n";
    else
    cout<<"NO\n";
      
    
   }
return 0;
}
