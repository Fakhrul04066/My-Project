#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    stack<char>st;
    int cnt = 0;

    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[' || c == '<')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
                cout << "Impossible\n";
                return;
            }

            char open = st.top();
            st.pop();

            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '[') ||
                (c == '>' && open != '<'))
            {
                cnt++;
            }
        }
    }

    if (!st.empty())
        cout << "Impossible\n";
    else
        cout << cnt << '\n';
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