#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{   
   int n,c=0;
   cin>>n;
   int a[n][2];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<2;j++)
       {
           cin>>a[i][j];
       }
   }
   int j=0;
   for(int i=0;i<n;i++)
   {
      
    if((a[i][j+1]-a[i][j])>=2)
       c++;
   }
   cout<<c<<endl;


    return 0;
}
