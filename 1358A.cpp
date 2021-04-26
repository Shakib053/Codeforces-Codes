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
   int n,m;
   cin>>n>>m;
   if(n==1 && m==1)
   cout<<1<<endl;
   else if(n==2 && m==2)
   cout<<2<<endl;
   else
   {
       if((n*m)%2==0)
       cout<<(n*m)/2<<endl;
       else
       cout<<((n*m)/2)+1<<endl;
   }
   
}


return 0;
}
