#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    stack<int> st;
    vector<int> ans;
    vector<bool> printed(n + 1, false);
    string a;
    cin >> a;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            st.push(i + 1);
        }
        if (a[i] == '2')
        {
            if (!st.empty())
            {
                printed[st.top()] = true;
                st.pop();
            }
            else
            {
                printed[i + 1] = true;
            }
        }
        else if (a[i] == '3')
            printed[i + 1] = true;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!printed[i])
        {
            ans.push_back(i);
        }
    }

    cout << ans.size() << endl;

    for (int x : ans)
    {
        cout << x << " ";
    }

    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}