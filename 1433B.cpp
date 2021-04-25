#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{
int t;
cin>>t;
while (t--){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int c=0,ans=0;
stack<int>s;
for(int i=0;i<n;i++)
{
    if(a[i]==1)
    {
        s.push(1);
        ans=ans+c;
        c=0;

    }
    else
    {
        if(s.empty()==0) c++;
    }

}
    
    cout<<ans<<endl;
}

 
return 0;
}

