#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        unordered_map<long long, int> f;

        int mf = 0;
        for (int i = 0; i < N; i++)
        {
            long long x;
            cin >> x;

            f[x]++;
            mf = max(mf, f[x]);
        }

        cout << (mf + 1) / 2 << '\n';
    }

    return 0;
}