#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin>>n;
    vector<int>a(3);
    for(int i=0;i<3;i++){
        cin>>a[i];
       
    }
    int minn=a[0];
    for(int i=1;i<3;i++){
        minn=min(minn,a[i]);
    }
    cout<<n-minn<<endl;
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