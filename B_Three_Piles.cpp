#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    ll a, b,c;
    cin>>a>>b>>c;
    if(abs(a-b)>abs(a+c-b)){
        cout<<abs(a-b)<<endl;
    }
    else{
        cout<<abs(a+c-b)<<endl;
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