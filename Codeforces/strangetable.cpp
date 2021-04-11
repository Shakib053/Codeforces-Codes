
#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define pi 3.1416
using namespace std;
int main()
{   
   int t;
   cin>>t;
   while (t--)
   {
       long long int n,m,f;
       cin>>n>>m>>f;
       f=f-1;
       long long int c=f/n;
       long long int r=f%n;
       cout<<r*m+c+1<<endl;
   }
   
    return 0;

}