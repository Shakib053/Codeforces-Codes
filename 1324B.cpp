#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int ispal( int a[3])
{
    int flag=0;
    for(int i=0;i<3;i++)
    {
        if(a[i]!=a[3-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    return 0;
    else
    return 1;
}
int main()
{
int t;
cin>>t;
while (t--)
{
 int n;
 cin>>n;
 int a[n],b[n];
 for(int i=0;i<n;i++)
 {
  cin>>a[i]; 
  b[i]=a[i];
 }
 sort(b,b+n);
 if(b[0]==b[1] && b[1]==b[2])
 cout<<"YES\n";
 else if(ispal(a)==1)
 cout<<"YES\n";
 else
 {   
     int f=0;
     int check[3];
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n-1;j++)
         {  
             check[0]=a[i];
             check[1]=a[j];
             check[2]=a[j+1];
             if(ispal(check)==1)
                 {
                  f=1;
                  break;
                 }
             
         }
         if(f==1)
         break;
     }
    //  for(int i=0;i<3;i++)
    //  cout<<check[i]<<" ";
    //  cout<<endl;
    if(f==1)
    cout<<"YES\n";
    else
    cout<<"NO\n"; 
 }


}


return 0;
}
