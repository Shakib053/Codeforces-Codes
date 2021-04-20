#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
int main()
{   
 
int n,k;
cin>>n>>k;
int a=240-k;
int sum=0,c=0;
for(int i=1;i<=n;i++)
{
   sum=sum+5*i;
   c++;
   if(sum>a){
       c--;
   break;
   }
}
cout<<c<<endl;
return 0;
}

