#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{ 
    int n,x;
    cin>>n>>x;
    if(n<=2)
    cout<<1<<endl;
    else
    {
    int flat=1,z=2;
    while (1)
    {
     z=z+x;
     flat++;
     if(z>=n)
     {
         cout<<flat<<endl;
         break;
     }   
    }

    }
    
    
   
}


return 0;
}
