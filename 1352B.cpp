#include<bits/stdc++.h>
#include<iterator>
#include<set>
#define ll long long
using namespace std;
int main()
{   
 int t;
 cin>>t;
 while (t--)
 {
    int n,k;
    cin>>n>>k;
    if(n<k)
    cout<<"NO\n";
    else if(n%2!=0 && k%2==0)
    cout<<"NO\n";
    else if(n%2==0 && k%2!=0 && n>=2*k)
    { 
        cout<<"YES\n";
      for(int i=0;i<k-1;i++)
     {
        cout<<2<<" ";
     }
     cout<<n-2*(k-1);
     cout<<endl;
    }
    else if(n%2==0 && k%2!=0 && n<2*k)
    { 
        cout<<"NO\n";
      
    }
    else if(n==k)
    {
        cout<<"YES\n";
        for(int i=0;i<k;i++)
     {
        cout<<1<<" ";
     }
     cout<<endl;
    }
    else if(n%2==0 && k%2==0 && n>=2*k)
    {
        cout<<"YES\n";
        for(int i=0;i<k-1;i++)
     {
        cout<<2<<" ";
     }
     cout<<n-2*(k-1);
     cout<<endl;
    }
    else if(n%2==0 && k%2==0 && n<2*k)
    {
        cout<<"YES\n";
        for(int i=0;i<k-1;i++)
     {
        cout<<1<<" ";
     }
     cout<<n-k+1;
     cout<<endl;
    }
     else if(n%2==1 && k%2==1 && n>=2*k)
    {  

        cout<<"YES\n";
        for(int i=0;i<k-1;i++)
     {
        cout<<1<<" ";
     }
     cout<<n-k+1;
     cout<<endl;
    
     
    }
     else if(n%2!=0 && k%2!=0 && n<2*k)
    {
        cout<<"YES\n";
        for(int i=0;i<k-1;i++)
     {
        cout<<1<<" ";
     }
     cout<<n-k+1;
     cout<<endl;
    }
    //cout<<endl;
 }
 

return 0;
}

