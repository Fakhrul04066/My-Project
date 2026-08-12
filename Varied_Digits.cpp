#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int solve()
{
    int a;
    cin >> a;

    int b = a % 10; 
    a /= 10;        

    while (a > 0)
    {
        int digit = a % 10;

        if (b != digit)
        {
            cout << "Yes" << endl;
            return 0;
        }

        a /= 10;
    }

    cout << "No" << endl;
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}