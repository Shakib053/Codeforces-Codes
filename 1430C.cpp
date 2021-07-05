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
 ll n;
 cin>>n;
 cout<<2<<endl;
 cout<<n<<" "<<n-1<<endl;
 for(ll i=n;i>2;i--)
 {

     cout<<i<<" "<<i-2<<endl;
 }




}

 
return 0;
}
