#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
int main()
{   

ll int n;
cin>>n;
ll int c,t=0;
if(n%100==0){
c=n/100;
cout<<c<<endl;
return 0;
}
if(n>100)
{
    c=n/100;
    n=n%100;
    t=t+c;
}
if(n<100 && n>=20)
{
    c=n/20;
    n=n%20;
    t=t+c; 
}
if(n<20 && n>=10)
{
    c=n/10;
    n=n%10;
    t=t+c;
}
if(n<10 && n>=5)
{
    c=n/5;
    n=n%5;
    t=t+c;
}
if(n<5 && n>=1)
{
    c=n/1;
    n=n%1;
    t=t+c;
}
cout<<t<<endl;
return 0;

}

