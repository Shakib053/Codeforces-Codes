#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
double a,b,c;
cin>>a>>b>>c;
double aa=(b*b)-(4*a*c);
double bx=2*a;
double aa2=sqrt(aa);
double ans1=(-b-aa2)/bx;
double ans2=(-b+aa2)/bx;
if(ans1>ans2)
{
cout<<fixed<<setprecision(6)<<ans1<<endl;
cout<<fixed<<setprecision(6)<<ans2<<endl;
}
else
{
cout<<fixed<<setprecision(6)<<ans2<<endl;
cout<<fixed<<setprecision(6)<<ans1<<endl;
}

return 0;
}
