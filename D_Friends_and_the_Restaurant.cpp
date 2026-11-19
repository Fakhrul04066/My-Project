#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b(n);
    vector<int>d(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
        d[i]=b[i]-a[i];
    }
    sort(all(d));
    int ans=0;
    int l=0,r=n-1;
    while(l<r){
        if(d[l]+d[r]>=0){
            ans++;
            l++;
            r--;
        }
        else{
            l++;
        }
    }
    cout<<ans<<endl;


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