#include<bits/stdc++.h>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
#define M 10000000
bool marked[M];

bool prime(int n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  if(marked[n]==false) return true;
  else return false;

}

void sieve(int n) {
  for (int i = 3; i * i <= n; i += 2) {
    if (marked[i] == false) { // i is a prime
      for (int j = i * i; j <= n; j = j + i) {
        marked[j] = true;
      }
    }
  }
}
int main()
{
    sieve(10000000);
  vector<ll> store;
for(ll i=2;i<M;i++){
            if(prime(i)==true){
                store.push_back(i);
            }
        }
int t;
cin>>t;
while (t--)
{
ll d;
cin>>d;
ll ans;
if(d==1)
cout<<6<<endl;
else
{
    ll check=d;
    d=d+1;
while (1)
{
    if(prime(d)==true)
    break;
    else
    d++;
}
ll index;
for(ll i=0;i<store.size();i++)
{
  if(store[i]==d)
  {
      index=i;
      break;
  }
}

for(ll i=index;i<store.size();i++)
{
  if(abs(store[i]-d)>=check)
  {
      ans=store[i]*d;
      if(ans%2==1)
      break;
  }
}
cout<<ans<<endl;
}


}


return 0;
}
