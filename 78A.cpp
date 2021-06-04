#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
 int count=0;
vector<int>check(3);
for(int i=0;i<3;i++)
{  
   
    char ch;
    while ((ch=getchar()) && ch!='\n')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        count++;
    }
    check.push_back(count);
    count=0;
}
// for(auto i:check)
// cout<<i<<" ";
// cout<<endl;
if(check[3]==5 && check[4]==7 && check[5]==5)
cout<<"YES\n";
else
cout<<"NO\n";
return 0;
}
