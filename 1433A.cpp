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
int cnt=0;
for(int i=1;i<=9;i++)
{   
    int sum=0;
    for(int j=1;j<=4;j++)
    {
      sum=sum*10+i;
      cnt=cnt+j;
      if(sum==n)
      {
          cout<<cnt<<endl;
          break;
      }
    }
}
}

 
return 0;
}

