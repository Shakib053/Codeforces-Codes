#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
un ll n,m;
cin>>n>>m;
un ll dm[n];
un ll ln[m];
for(int i=0;i<n;i++)
cin>>dm[i];
for(int i=0;i<m;i++)
cin>>ln[i];
un ll sum=0;
int j=0;
for(int i=0;i<m;i++)
{ 
 while (sum+dm[j]<ln[i])
 {
     sum=sum+dm[j];
  j++;
 }
 cout<<j+1<<" "<<ln[i]-sum<<endl;
  
}

return 0;
}
