#include<bits/stdc++.h>
#include<iterator>
#define ll  long long int
#define un  unsigned
#define mod 1000000007
using namespace std;
int main()
{
  int n;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
		
	std::sort(v.begin(), v.end(), []
    (const std::string& first, const std::string& second){
        return first.size() < second.size();
    });
	for (int i = 0; i < n - 1; ++i) {
		if (v[i + 1].find(v[i]) == string::npos) {
			cout << "NO\n";
			return 0;
		}
	}
	
	cout << "YES\n";
	for (auto it : v)
		cout << it << endl;
	
	return 0;

return 0;
}
