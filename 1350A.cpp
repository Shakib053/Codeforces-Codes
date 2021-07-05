#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
int main()
{   
ll int t;
cin>>t;
while (t--)
{
    ll int n,k;
    cin>>n>>k;
    int flag=0,fn;
    for(int i=2;i<=(ceil(sqrt(n)));i++)
    {
        if(n%i==0)
        {
            fn=i;
            break;
        }
        else if(i==(ceil(sqrt(n))))
        flag=1;

    }

    if(flag==1)
    fn=n;
    cout<<n+fn+(2*(k-1))<<endl;
    
}


return 0;
}

