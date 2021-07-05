#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int lcm(int x,int y)
{
    int lm;
    if(x>y)
    lm=x;
    else
    lm=y;
    while (1)
    {
        if(lm%x==0 && lm%y==0)
        {
        return lm;
        break;
        }
        lm++;

    }
    
}
int main()
{
int t;
cin>>t;
while (t--)
{ 
    string s,s1;
    cin>>s>>s1;
    if(s.size()==s1.size())
   {
       if(s==s1)
       cout<<s<<endl;
       else
       cout<<-1<<endl;
   }
   else
   { 
    string gr,sm,ans="";
     if(s.size()>s1.size())
     {
      gr=s;
      sm=s1;
     }
     else
     {
         gr=s1;
         sm=s;
     }
     int l=lcm(s.size(),s1.size()),j=0;
     for(int i=0;i<l;i++)
     {
      ans=ans+(char)sm[j];
      j++;
      j=j%sm.size();
     }
     j=0;
     int flag=0;
     for(int i=0;i<l;i++)
     {
         if(gr[j]!=ans[i])
         {
             cout<<-1<<endl;
             flag=1;
             break;
         }
         j++;
         j=j%gr.size();

     }
     if(flag==0)
     cout<<ans<<endl;

   }
    
   
}


return 0;
}
