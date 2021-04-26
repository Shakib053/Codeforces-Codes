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
   int n;
   cin>>n;
   int a[n],aa=0,bb=0;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]==1)
       aa++;
       else
       bb++;
   }
   if(bb%2==0)
   {
       if(aa%2==0)
       cout<<"YES\n";
       else
       cout<<"NO\n";
   }
   else
   {   if(aa>=2)
       {
        if((aa-2)%2==0)
       cout<<"YES\n";
       else
       cout<<"NO\n";
       }
       else
       cout<<"NO\n";
       
   }

    
}
 


return 0;
}
