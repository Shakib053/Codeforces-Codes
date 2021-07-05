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
ll p,ans;
ll arr[3];
cin>>p;
for(int i=0;i<3;i++)
cin>>arr[i];
sort(arr,arr+3);
if(arr[0]>=p)
cout<<arr[0]-p<<endl;
else
{    
    if((p%arr[0])!=0)
    arr[0]=arr[0]*((p/arr[0])+1);
    else
    arr[0]=arr[0]*((p/arr[0]));
    if((p%arr[1])!=0)
    arr[1]=arr[1]*((p/arr[1])+1);
    else
    arr[1]=arr[1]*((p/arr[1])); 
    if((p%arr[2])!=0)
    arr[2]=arr[2]*((p/arr[2])+1);
    else
    arr[2]=arr[2]*((p/arr[2]));
    sort(arr,arr+3);
    cout<<arr[0]-p<<endl;
}
}


return 0;
}
