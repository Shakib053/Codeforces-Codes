#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{
 
ll n,m,i,j;
cin>>n>>m>>i>>j;
ll x1,x2,y1,y2;
if(i==1 && j==1)
cout<<1<<" "<<min(n,m)<<" "<<n<<" "<<m<<endl; 
// else if(i==n && j==m)
// cout<<1<<" "<<1<<" "<<max(n,m)<<" "<<min(n,m)<<endl; 
else
cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl; 

}


return 0;
}
