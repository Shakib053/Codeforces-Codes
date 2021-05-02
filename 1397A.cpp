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
    int n;
    cin>>n;
    string s;
    int len[26];
    memset(len,0,sizeof(len));
    for(int i=0;i<n;i++)
    {   
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            len[s[i]-'a']++;
        }
        
    }
 int flag=0;
for(int i=0;i<26;i++)
{
    if(len[i]%n!=0)
     {
    cout<<"NO\n";
    flag=1;
    break;
     }
 }
    
   if(flag==0)
   cout<<"YES\n";
}
 
return 0;
}
