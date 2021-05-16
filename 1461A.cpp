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
   int n,k;
   cin>>n>>k;
   string ans="";
   for(int i=1;i<=n;i++)
   {   
       if(i%3==0)
       ans=ans+(char)'a';
       else if(i%3==1)
       ans=ans+(char)'b';
       else
       ans=ans+(char)'c';
   }
   cout<<ans<<endl;
   
}


return 0;
}
