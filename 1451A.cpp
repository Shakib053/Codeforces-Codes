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
int n;
cin>>n;
if(n==1)
cout<<0<<endl;
else if(n==2)
cout<<1<<endl;
else if(n%2==0 && n!=2)
cout<<2<<endl;
else if(n==3)
cout<<2<<endl;
else
cout<<3<<endl;

}


return 0;
}
