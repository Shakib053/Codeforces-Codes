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
 string s;
 cin>>s;
 int n=s.size();
  int flag=0;
  for(int i=0;i<n-1;i++)
     {
         if(s[i]=='1' && s[i+1]=='1' && flag==0)
         flag=1;
         if(flag==1 && s[i]=='0' && s[i+1]=='0')
         {
             flag=2;
             break;
         }
     }
 if(flag==2)
 cout<<"NO\n";
 else
 cout<<"YES\n";
 
}


return 0;
}
