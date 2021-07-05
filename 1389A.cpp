#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
using namespace std;
int main()
{
int t;
cin>>t;
while (t--)
{ 
    int n,m,flag=0;
    cin>>n>>m;
    for(int i=2;i<=m/n;i++)
    {
        if((n*i)<=m)
        {
            cout<<n<<" "<<(n*i)<<endl;
            flag=1;
            break;
        }
        else
        flag=0;
    }
    if(flag==0)
    cout<<-1<<" "<<-1<<endl;
   
}


return 0;
}
