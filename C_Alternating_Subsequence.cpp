#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    ll n;
    cin>>n;
    ll sum=0;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll mx=a[0];
    for(ll i=1;i<n;i++)
    {
        if((a[i]>0 && a[i-1]>0) ||  (a[i]<0 && a[i-1]<0) ){
            mx=max(mx,a[i]);
        }
        else{
            sum+=mx;
            mx=a[i];
        }
    }
    sum+=mx;
    cout<<sum<<endl;
    return ;
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