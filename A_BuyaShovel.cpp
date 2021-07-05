#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;

int main()
{   
 int k,r;
 cin>>k>>r;
 int i=0,sum=0;
while (1)
{
    sum=sum+k;
    i++;
    if(sum%10==0 || sum%10==r)
    {
        cout<<i<<endl;
        break;
    }
    
}
 
return 0;
}

