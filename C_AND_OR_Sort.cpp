#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

int  solve()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    if(a[0]=='1') {
        cout << count(a.begin(), a.end(), '0') << endl;
        return 0;
    }

    int rightZeros = count(a.begin(), a.end(), '0') - 1;
    int leftOnes = 0;
    int ans = rightZeros;

    for (int i = 1; i < n; i++)
    {
        if (a[i] == '1')
        {
            leftOnes++;
        }
        else
        {
            rightZeros--;
        }

        ans = min(ans, leftOnes + rightZeros);
    }
    cout<<ans<<endl;
    return 0;
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