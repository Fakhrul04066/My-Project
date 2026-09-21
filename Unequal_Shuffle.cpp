#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        string A, B;

        cin >> N;
        cin >> A >> B;

        int aA = count(A.begin(), A.end(), 'a');
        int bB = count(B.begin(), B.end(), 'b');

        if (aA == bB)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}