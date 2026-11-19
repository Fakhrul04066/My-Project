#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    ll sum=0;
    vector<int>pos(k);
    sort(a.rbegin(),a.rend());
    for(int i=0;i<k;i++){
        sum+=a[i].first;
        pos[i]=(a[i].second);
    }
    cout<<sum<<endl;
    sort(pos.begin(),pos.end());
    int pre=0;
    for(int i=0;i<k-1;i++){
        cout<<pos[i]-pre<<" ";
        pre=pos[i];
    }
    cout<<n-pre<<endl;
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