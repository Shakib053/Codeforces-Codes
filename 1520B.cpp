#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
ll int t;
cin>>t;
while (t--)
{ 
    unsigned ll  int n;
    cin>>n;
    if(n<=9)
    cout<<n<<endl;
    else if(n==10)
    cout<<9<<endl;
    else if(n>10 && n<=100)
    cout<<9+(n/11)<<endl;
    else if(n>100 && n<=1000)
    cout<<18+(n/111)<<endl;
    else if(n>1000 && n<=10000)
    cout<<27+(n/1111)<<endl;
    else if(n>10000 && n<=100000)
    cout<<36+(n/11111)<<endl;
    else if(n>100000 && n<=1000000)
    cout<<45+(n/111111)<<endl;
    else if(n>1000000 && n<=10000000)
    cout<<54+(n/1111111)<<endl;
    else if(n>10000000 && n<=100000000)
    cout<<63+(n/11111111)<<endl;
    else if(n>100000000 && n<=1000000000)
    cout<<72+(n/111111111)<<endl;
     else if(n>1000000000 && n<=1000000000)
    cout<<81+(n/1111111111)<<endl;
   
}


return 0;
}
