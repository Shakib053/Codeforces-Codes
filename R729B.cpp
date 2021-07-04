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
     ll i=0;
     while (pow(a,i)<=n)
     { 
         ll check=n-pow(a,i);
        if(check%b==0)
        {
            flag=1;
            break;
        }
        i++;
     }
 }
 if(flag==1)
 cout<<"YES\n";
 else
 cout<<"NO\n";
 
}

 
return 0;
}
