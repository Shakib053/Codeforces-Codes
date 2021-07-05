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
   int a,flag=0;
   string b;
   cin>>a>>b;
   int c=0,ans=0;
   for(int i=b.size()-1;i>=0;i--)
   {   
       if(b[i]=='P')
       c++;
       else
       {
        ans=max(c,ans);
        c=0;
       }
   }
   cout<<ans<<endl;
}


return 0;
}
