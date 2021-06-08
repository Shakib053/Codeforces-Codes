#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n;
cin>>n;
int ans=(n*(n+1))/2;
int p=0;
int j=1;
for(int i=0;i<n-1;i++)
{
  p=p+(n-j)*i;
  j++;
}
cout<<ans+p<<endl;

return 0;
}
