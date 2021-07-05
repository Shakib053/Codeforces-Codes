#include<bits/stdc++.h>
#include<iterator>
#include <math.h>
#include<numeric>
#define ll long long
using namespace std;
int main()
{
int n,m,k;
cin>>n>>m>>k;
int mn=min(m,k);
if(mn>=n)
cout<<"Yes\n";
else
cout<<"No\n";


return 0;
}
