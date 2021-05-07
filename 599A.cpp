#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
int d1,d2,d3;
cin>>d1>>d2>>d3;
int z=d1+d2+d3;
if((d1*2+d2*2)<z)
cout<<d1*2+d2*2<<endl;
else if((d2*2+d3*2)<z)
cout<<d2*2+d3*2<<endl;
else if((d1*2+d3*2)<z)
cout<<d1*2+d3*2<<endl;
else
cout<<z<<endl;


return 0;
}
