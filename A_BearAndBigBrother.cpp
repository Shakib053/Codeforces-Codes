#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define pi 3.1416
#define ll long long
using namespace std;
int main()
{
    int l,b,c=0;
    cin>>l>>b;
    while (1)
    {
        l=l*3;
        b=b*2;
        c++;
        if(l>b)
        {
         cout<<c<<endl;
         return 0;
        }
    }
     
    return 0;
}