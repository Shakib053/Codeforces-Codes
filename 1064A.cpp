#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
 int a[3];
 for(int i=0;i<3;i++)
 cin>>a[i];
 sort(a,a+3);
if(a[0]+a[1]<=a[2])
cout<<a[2]-(a[0]+a[1])+1<<endl;
else
cout<<0<<endl;



return 0;
}
