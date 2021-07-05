#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
   int s,v1,v2,t1,t2,f,se;
   cin>>s>>v1>>v2>>t1>>t2;
   f=(v1*s)+(2*t1);
   se=(v2*s)+(2*t2);
   if(f==se)
   cout<<"Friendship\n";
   else if(f<se)
   cout<<"First\n";
   else if(se<f)
   cout<<"Second\n";


return 0;
}
