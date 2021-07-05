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
 ll c1,c2,c3;
 cin>>c1>>c2>>c3;
 ll a1,a2,a3,a4,a5;
 cin>>a1>>a2>>a3>>a4>>a5;
 c1=c1-a1;
 c2=c2-a2;
 c3=c3-a3;
 int flag=0;
 if(c1<0 || c2<0 || c3<0)
 flag=1;
 ll baki=a4+a5;
 ll free=c1+c2+c3;
 if(baki>free)
 flag=1;
 if(c3<baki)
 {
     if(a4>=c1)
     a4=a4-c1;
     else
     a4=0;
     if(a5>=c2)
     a5=a5-c2;
     else
     a5=0;
     ll f=a4+a5;
     if(f>c3)
     flag=1;
 }
 if(flag==1)
 cout<<"NO\n";
 else
 cout<<"YES\n"; 


}


return 0;
}
