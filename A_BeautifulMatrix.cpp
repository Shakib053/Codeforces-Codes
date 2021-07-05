#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define pi 3.1416
#define ll long long
using namespace std;
int main()
{
    
   int m[6][6];
   int r,c;
   for(int i=1;i<=5;i++)
   {
       for(int j=1;j<=5;j++)
       {
           cin>>m[i][j];
           if(m[i][j]==1)
           {
               r=i;
               c=j;
           }
       }
   }
    cout<<abs(r-3)+abs(c-3)<<endl;
    return 0;
}