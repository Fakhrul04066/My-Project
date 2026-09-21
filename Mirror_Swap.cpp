#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin>>n;
    vector<int> a(2*n);
    for(int i=0;i<2*n;i++){
        cin>>a[i];
    }
    ll sum=0;
    int l=0,r=2*n-1;
    while(l<r){
        sum+=max(a[l],a[r]);
            l++;
            r--;
    }
    cout<<sum<<endl;
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