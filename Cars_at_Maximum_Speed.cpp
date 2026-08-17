#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin>>n;
    vector<int> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int ans=1;
    for(int i=1;i<n;i++){
        if(s[i]<=s[i-1]) ans++;
    }
    cout<<ans<<endl;
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