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
 int n;
 cin>>n;
 int a[2*n];
 for(int i=0;i<2*n;i++)
 cin>>a[i];
 int odd=0,even=0;
 for(int i=0;i<2*n;i++)
 {
     if(a[i]%2==1)
     odd++;
     else
     even++;
 }
 if(odd==n && even==n)
 cout<<"YES\n";
 else
 cout<<"NO\n";
}

 
return 0;
}
