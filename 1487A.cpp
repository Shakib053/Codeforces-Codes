#include<bits/stdc++.h>
#include<iterator>
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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int c=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        c++;
        else
        {
            break;
        }
    }
    cout<<n-c<<endl;
    
    
   
}


return 0;
}
