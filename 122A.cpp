#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int n;
cin>>n;
int a[12]={4,7,47,74,444,474,477,447,744,747,774,777};
int flag=0;
for(int i=0;i<12;i++)
{
    if(n%a[i]==0)
    {
        flag=1;
        break;
    }
}
 if(flag==1)
 {
     cout<<"YES\n";
 }
 else
 cout<<"NO\n";
return 0;
}
