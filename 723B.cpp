#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{

 int n;
 cin>>n;   
 string s;
 cin>>s;
 int wl=0,w=0;
 for(int i=0;i<n;i++)
 {   
    if(s[i]=='(')
    {   
        int f=0;
        while (s[i+1]!=')')
        {
            if(s[i+1]!='_' && f==0) f=1,w++;
            else if(s[i+1]=='_') f=0;
            //else if(f==1 && (s[i]=='_'))
            i++;
        }
        
    }
 }
 int m=0,f=0;
 for(int i=0;i<n;i++)
 { 
     if(s[i]=='(')
     {
         while (s[i+1]!=')')
         {
            i++;
         }
         
     }
     else if(i==n || s[i]=='_' || s[i]=='(' || s[i]==')') 
    {
         m=max(m,wl),wl=0;
    }
    else if(s[i]!='_' || s[i]!='(' || s[i]!=')')
    wl++;
   

 }
m=max(m,wl);
 cout<<m<<" "<<w<<endl;

return 0;
}

