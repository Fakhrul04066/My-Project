#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    int odd=0,two=0,four=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
        {
            odd++;
        }
        else if(a[i]%4==0)
        {
            four++;
        }
        else
        {
            two++;
        }
    }
    cout << max({odd, two, four}) << endl;
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