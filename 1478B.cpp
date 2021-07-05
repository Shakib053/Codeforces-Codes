#include<bits/stdc++.h>
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
   int q,d;
   cin>>q>>d;
   while (q--)
   {
       ll x;
       cin>>x;
       if(d==1)
       cout<<"YES\n";
       else if(x>=10*d)
       cout<<"YES\n";
       else
       { 
           int flag=0;
           while (x>=d)
           {
               if(x%d==0)
               {
                   flag=1;
                   break;
               }
               x=x-10;
           }
           if(flag==1)
           cout<<"YES\n";
           else
           cout<<"NO\n";
       }
        
         
        
          
   }
   
}


return 0;
}
