#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
ll n;
string s;
cin>>n;
while (1)
{  
    s=s+"47";
    sort(s.begin(),s.end());
    do{
 if(stoll(s)>=n)
  {
      cout<<stoll(s)<<endl;
    return 0;
  }
    }
    while (next_permutation(s.begin(),s.end()));
   
}
return 0;
}
