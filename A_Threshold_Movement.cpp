#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> w(n);

        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }

        if (n % 2 == 1)
        {
            cout << "NO\n";
            continue;
        }

        long long minOdd = LLONG_MAX;
        long long maxEven = LLONG_MIN;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                minOdd = min(minOdd, w[i]);
            else
                maxEven = max(maxEven, w[i]);
        }

        if (maxEven + 1 < minOdd)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}