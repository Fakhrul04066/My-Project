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
    for(int i=0;i<n;i+){
        cin>>a[i];
    }
    ll  maxx=a[n-1];
    vector<ll>dp(n);
    dp[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        if((i+a[i])<n){
            dp[i]=a[i]+dp[i+a[i]];
        }
        else{
            dp[i]=a[i];
        }
        maxx=max(maxx,dp[i]);

    }
    cout<<maxx<<endl;
    
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