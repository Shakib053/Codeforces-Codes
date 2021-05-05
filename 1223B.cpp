#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{  
    string s,s1;
    cin>>s>>s1;
    int c=0,flag=0;
    for(int i=0;i<s.size();i++)
    {
     for(int j=0;j<s1.size();j++)
     {
         if(s[i]==s1[j])
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
