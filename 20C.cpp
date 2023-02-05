
//
//  main.cpp
//  SWC
//
//  Created by Kazi tanjim on 31/10/22.
//

#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <set>

using namespace std;

struct node
{
    int u;
    long long cost;
    node(int _u, long long _cost)
    {
        u = _u;
        cost = _cost;
    }
    bool friend operator<(node a, node b) { return a.cost > b.cost; }
};

int parent[100005];
vector<int> ans;

void dijstkra(int source, vector<int> dis[], vector<long long> cost[], int n)
{
    long long distance[n + 1];

    for (int i = 0; i <= n; i++)
    {
        distance[i] = 1e18;
    }

    priority_queue<node> q;
    q.push(node(source, 0));
    distance[source] = 0;

    while (!q.empty())
    {
        node top = q.top();
        q.pop();
        int u = top.u;

        for (int i = 0; i < dis[u].size(); i++)
        {
            int v = dis[u][i];
            if (distance[v] > distance[u] + cost[u][i])
            {
                distance[v] = distance[u] + cost[u][i];
                q.push(node(v, distance[v]));
                parent[v] = u;
            }
        }
    }

    ans.push_back(n);
    int index = n;

    while (1)
    {
        if (parent[index] == index)
            break;
        if (parent[index] == source)
            break;
        ans.push_back(parent[index]);
        index = parent[index];
    }

    ans.push_back(source);

    if (parent[n] == n)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> vertices[100005];
    vector<long long> cost[100005];
    ans.clear();

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vertices[a].push_back(b);
        vertices[b].push_back(a);
        cost[a].push_back(c);
        cost[b].push_back(c);
    }

    for (int i = 0; i <= n; i++)
    {
        parent[i] = i;
    }

    dijstkra(1, vertices, cost, n);

    return 0;
}
