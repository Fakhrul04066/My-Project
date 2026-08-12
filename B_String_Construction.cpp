#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, k;
    cin >> n >> k;

    int runs = n - k;

    if (runs == 1)
    {
        cout << -1 << endl;
        return;
    }

    int ones = (n + 1) / 2;
    int zeros = n / 2;

    int oneRuns = (runs + 1) / 2;
    int zeroRuns = runs / 2;

    vector<int> lengths(runs, 1);

    lengths[0] += ones - oneRuns;
    lengths[1] += zeros - zeroRuns;

    string answer;

    for (int i = 0; i < runs; i++)
    {
        char current = (i % 2 == 0 ? '1' : '0');
        answer += string(lengths[i], current);
    }

    cout << answer << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}