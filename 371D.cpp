//
//  main.cpp
//  kts
//
//  Created by Kazi tanjim on 23/1/23.
//

#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <set>

using namespace std;
int linked[1000005];
int vessels[1000005];
int curr[1000005];
int total;

int solve(int index, int amount)
{
    if (index == total + 1)
        return index;

    int temp = vessels[index] - curr[index];
    temp = min(temp, amount);
    curr[index] = curr[index] + temp;

    amount = amount - temp;

    if (amount > 0)
    {
        return linked[index] = solve(linked[index], amount);
    }
    else
    {
        return index;
    }
}
int main()
{
    int n;
    cin >> n;
    total = n;
    for (int i = 1; i <= n; i++)
    {
        cin >> vessels[i];
        curr[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        linked[i] = i + 1;
    }
    int m;
    cin >> m;
    while (m--)
    {
        int type;
        cin >> type;
        int index, amount;

        if (type == 1)
        {
            cin >> index >> amount;
            solve(index, amount);
        }
        else
        {
            cin >> index;
        }

        if (type == 2)
        {
            cout << curr[index] << endl;
        }
    }

    return 0;
}
