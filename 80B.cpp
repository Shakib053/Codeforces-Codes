#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
double h,m;
scanf("%lf:%lf",&h,&m);
double x,y;
y=m*6;
x=((h*30)+(m/60)*30);
if(x<360)
cout<<x<<" "<<y<<endl;
else
cout<<x-360<<" "<<y<<endl;
return 0;
}
