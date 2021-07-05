#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
bool regular(string s)
{
    int n=s.size(),cnt=0;
    for(int i=0;i<n;i++)
    {
     if(s[i]=='(')
     cnt++;
     else if(s[i]==')')
     cnt--;
     if(cnt<0)
     return false;
    }
    if(cnt==0)
    return true;
    else
    return false;
}
int main()
{
int t;
cin>>t;
while (t--)
{ 
   string s;
   cin>>s;
   int n=s.size();
   if(s[0]==s[n-1])
   cout<<"NO\n";
   else
   {
       string ans=s;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='A' || s[i]=='B')
           ans[i]='(';
           else
           ans[i]=')';
       }
       if(regular(ans)==1)
       {
       cout<<"YES\n";
       continue;
       }
         for(int i=0;i<n;i++)
       {
           if(s[i]=='A' || s[i]=='C')
           ans[i]='(';
           else
           ans[i]=')';
       }
       if(regular(ans)==1)
       {
       cout<<"YES\n";
       continue;
       }
         for(int i=0;i<n;i++)
       {
           if(s[i]=='B' || s[i]=='C')
           ans[i]='(';
           else
           ans[i]=')';
       }
       if(regular(ans)==1)
       {
       cout<<"YES\n";
       continue;
       }
         for(int i=0;i<n;i++)
       {
           if(s[i]=='A' || s[i]=='B')
           ans[i]=')';
           else
           ans[i]='(';
       }
       if(regular(ans)==1)
       {
       cout<<"YES\n";
       continue;
       }
         for(int i=0;i<n;i++)
       {
           if(s[i]=='A' || s[i]=='C')
           ans[i]=')';
           else
           ans[i]='(';
       }
       if(regular(ans)==1)
       {
       cout<<"YES\n";
       continue;
       }
         for(int i=0;i<n;i++)
       {
           if(s[i]=='C' || s[i]=='B')
           ans[i]=')';
           else
           ans[i]='(';
       }
       if(regular(ans)==1)
       {
       cout<<"YES\n";
       continue;
       }
       cout<<"NO\n";
       
   }
   
}


return 0;
}
