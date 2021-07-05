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
 int a[3];
 for(int i=0;i<3;i++)
  cin>>a[i];
  sort(a,a+3);
  if(a[1]!=a[2])
  cout<<"NO\n";
  else
  {   cout<<"YES\n";
      cout<<1<<" "<<a[2]<<" "<<a[0]<<endl;
  }
    
}

 
return 0;
}

