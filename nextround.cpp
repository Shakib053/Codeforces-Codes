#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a>>b;
    int ar[a];
    for(int i=1;i<=a;i++)
    {
        cin>>ar[i];
    }
    int n=ar[b];
    if(n>0){
    for(int i=1;i<=a;i++)
    {
        if(ar[i]>=n)
        count++;
    }
    }
    else if(n==0)
    {
       for(int i=1;i<=a;i++)
    {
        if(ar[i]>n)
        count++;
    } 
    }
   cout<<count<<endl;
   
    return 0;
} 