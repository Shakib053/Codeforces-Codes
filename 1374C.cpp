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
   int n;
   cin>>n;
   string s;
   cin>>s;
   int ans=0;
   int flag=0,c=0;
   for(int i=0;i<n;i++)
   {
       if(s[i]=='(')
       {
           c++;
       }
       else if(s[i]==')' && c>0)
       {
           ans++;
           c--;
       }
   }
   cout<<(n/2)-ans<<endl;
}


return 0;
}
