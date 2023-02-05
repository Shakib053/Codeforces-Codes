#include <iostream>
#include <vector>
using namespace std;
int parent[1000005];
int findParent(int a)
{
    if (parent[a] == a)
    {
        return a;
    }
    return parent[a] = findParent(parent[a]);
}
void unionSet(int a, int b)
{
    a = findParent(a);
    b = findParent(b);
    if (a != b)
    {
        parent[b] = a;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i <= n; i++)
    {
        parent[i] = i;
    }
    while (m--)
    {
        string s;
        cin >> s;
        int u, v;
        cin >> u >> v;
        if (s == "union")
        {
            unionSet(u, v);
        }
        else if (s == "get")
        {
            int x = findParent(u);
            int y = findParent(v);
            if (x == y)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}