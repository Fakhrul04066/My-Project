#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin>> n;
    int ans = 0;
    int pow=1;
    while(n>0)
    {
        int rem= n%2;
        n/=2;
        ans+= rem*pow;
        pow*=10;
    }
    cout<< ans<< endl;
    
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