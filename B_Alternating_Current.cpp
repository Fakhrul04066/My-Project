#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    string s,st="";
    cin >> s;
    for (char c : s)
    {
        if (!st.empty() && st.back() == c)
            st.pop_back();
        else
            st.push_back(c);
    }

    cout << (st.empty() ? "Yes" : "No") << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;

    while (t--)
        solve();

    return 0;
}