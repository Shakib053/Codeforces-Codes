#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll t;
cin>>t;
while (t--)
{
 ll n,a,b;
 cin>>n>>a>>b;
 int flag=0;
 if(n==1 || n%b==1 || b==1)
 flag=1;
 else if (a==1)
 {
     if(n%b==1)
     flag=1;
 }
 else
 {   
     for(ll i=0;i<=sqrt(n);i++)
     {
         ll x=pow(a,i);
         if(x>n)
         break;
         ll check=n-x;
         if(check%b==0)
         {
             flag=1;
             break;
         }
     }
 }
 if(flag==1)
 cout<<"YES\n";
 else
 cout<<"NO\n";
 
}

 
return 0;
}
