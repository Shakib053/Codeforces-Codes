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
int a[t];
for(int i=0;i<t;i++)
cin>>a[i];
sort(a,a+t);
t=t-1;
cout<<a[t/2]<<endl;


return 0;
}
