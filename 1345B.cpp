#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int t;
cin>>t;
vector<un ll> v;
   for(int i=1;i<=100000;i++)
   {
       un ll z=(i*(3*i+1))/2;
       v.push_back(z);
   }
while (t--)
{ 
   un ll n;
   cin>>n;
   int h=0;
   for(int i=0;i<v.size();i++)
   {
       if(v[i]>n)
       {   
           break;
       }
       else
       h=i;
   }
   int cnt=0;
   for(int i=h;i>=0;i--)
   { 
       if(n==0)
       {
           break;
       }
       if(n>=v[i])
       {
        n=n-v[i];
        i++;
        cnt++;
       }
    
   }
   cout<<cnt<<endl;
   
}


return 0;
}
