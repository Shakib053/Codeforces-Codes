#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
  int n;
  cin>>n;
  ll a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  priority_queue<ll,vector<ll>,greater<ll>> pq;
  ll ans=0;
  ll sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+a[i];
    ans++;
    pq.push(a[i]);
    while (sum<0)
    {
        ans--;
        sum=sum-pq.top();
        pq.pop();
    }
    
  }
 
 cout<<ans<<endl;
return 0;
}
