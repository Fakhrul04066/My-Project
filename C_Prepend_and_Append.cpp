#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    vector<char>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=n;
    for(int i=0;i<n/2;i++){
        if(a[i]==a[n-i-1]){
            break;
        }
        else{
            res-=2;
        }
    }
    cout<<res<<endl;
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