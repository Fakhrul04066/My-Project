#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    if (n>=1900)
    {
        cout << "Division 1" << endl;
    }
    else if (n>=1600)
    {
        cout << "Division 2" << endl;
    }
    else if (n>=1400)
    {
        cout << "Division 3" << endl;
    }
    else
    {
        cout << "Division 4" << endl;
    }
    
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