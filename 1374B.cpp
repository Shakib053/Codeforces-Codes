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
    unsigned ll int n;
    cin>>n;
    //if(n%6!=0)
   // cout<<-1<<endl;
    //else
    //{  if()
    
        int c=0;
        while (1)
       {   
           
           if(n%6==0)
           {
               c++;
               n=n/6;

           }
           if(n%6!=0 && n%3==0) n=n*2,c++;
           //if(n==6) c++,n=n/6;
           if(n==1)
           {  
               cout<<c<<endl;
               break;
           }
           if(n%6!=0 && n%2!=0)
           {
           cout<<-1<<endl;
           break;
           }
           if(n%6!=0 && n%6!=0)
                 { cout<<-1<<endl;
                 break;
                 }
       }
       
    //}
}

 
return 0;
}

