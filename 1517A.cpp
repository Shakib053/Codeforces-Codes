#include<bits/stdc++.h>
#include<iterator>
#include<string>
#define ll long long
using namespace std;
int main()
{

 int t;
 cin>>t;
 while (t--)
 {
     unsigned ll int n;
     cin>>n;
     if(n<2050)
     cout<<-1<<endl;
     else if(n%2050!=0)
     cout<<-1<<endl;
     else
     {  unsigned ll int k=n/2050;
 string s=to_string(k);
 ll int z=s.size();
 ll int sum=0;
 while (z--)
 {   
     if(k>9){
     sum=sum+(k%10);
     k=k/10;
     }
     else
     sum=sum+k;
 }
 cout<<sum<<endl;
     }
 }
 
return 0;
}

