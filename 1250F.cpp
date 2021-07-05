#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
double n;
cin>>n;
int d=n;
if(floor(sqrt(n))==ceil(sqrt(n)))
{
    int f=sqrt(n);
    cout<<2*(f+f)<<endl;
}
else
{  
   int flag=0;
   for(int i=2;i<=sqrt(n);i++)
   {
       if(d%i==0)
       flag=1;
   }
   if(flag==0)
   {
       cout<<2*(n+1)<<endl;
   }
   else
   {
       vector<int> v;
       for(int i=2;i<=n/2;i++)
        {
       if(d%i==0)
       v.push_back(i);
        }
        int a,b;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]*v[i+1]==n)
            {
                a=v[i];
                b=v[i+1];
                break;
            }
        }
        cout<<2*(a+b)<<endl;
   }
}


return 0;
}
