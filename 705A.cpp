#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define pi 3.1415
#define ll long long
using namespace std;
int main()
{   
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        cout<<"I hate ";
        if(i%2==0)
        cout<<" I love ";
        if(i!=n)
        cout<<"that ";
        if(i==n)
        cout<<"it\n";
    }
    return 0;
}
