int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            auto it = upper_bound(v.begin() + i + 1, v.end(), v[i] - 1);
            if (it - v.begin() > i)
                ans++;
        }
        cout << ans << endl;
    }