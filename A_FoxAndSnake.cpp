#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
int main()
{   
 int n,m;
 cin>>n>>m;
 for(int i=1;i<=n;i++)
 {   
     int c=0;
     for(int j=1;j<=m;j++)
     {

         if(i%2!=0)
         {
             cout<<"#";
         }
        if(i%2==0 && j==1 && i%4==0 && c==0)
        {
         cout<<"#";
         c=1;
        }
         if(i%2==0 && i%4==0 && c==1 && j<m)
        {
         cout<<".";
        }
        if(i%2==0 && j!=m && i%4!=0)
        {
         cout<<".";
        }
        if(i%2==0 && j==m && i%4!=0)
        cout<<"#";
        
     }
     cout<<endl;
 }


return 0;
}

