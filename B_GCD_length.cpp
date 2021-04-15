#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define pi 3.1416
#define ll long long
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        ll int z=pow(10,c-1);
        ll int z1=pow(10,c-1);
        while (1)
        {
            z=z*2;
            if(z>=pow(10,a-1))
            break;
        }
        
        while (1)
        {
            z1=z1*3;
            if(z1>=pow(10,b-1))
            break;
        }
        cout<<z<<" "<<z1<<endl;
    }
    
    return 0;
}
