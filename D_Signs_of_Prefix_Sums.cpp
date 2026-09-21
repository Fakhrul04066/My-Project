#include <bits/stdc++.h>
using namespace std;

bool possible(const string &s, int cost)
{
    bool dp[7] = {};
    dp[3] = true;

    for (char c : s)
    {
        bool ndp[7] = {};

        for (int i = 0; i < 7; i++)
        {
            if (!dp[i])
                continue;

            int cur = i - 3;

            for (int j = 0; j < 7; j++)
            {
                int nxt = j - 3;

                if (cur == nxt || abs(cur - nxt) > cost)
                    continue;

                if (c == '+' && nxt > 0)
                    ndp[j] = true;
                else if (c == '-' && nxt < 0)
                    ndp[j] = true;
                else if (c == '0' && nxt == 0)
                    ndp[j] = true;
            }
        }

        memcpy(dp, ndp, sizeof(dp));
    }

    for (bool x : dp)
    {
        if (x)
            return true;
    }

    return false;
}

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int cost = 1; cost <= 3; cost++)
    {
        if (possible(s, cost))
        {
            cout << cost << '\n';
            return;
        }
    }

    cout << -1 << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int qrTNum;
    cin >> qrTNum;

    while (qrTNum--)
        solve();

    return 0;
}