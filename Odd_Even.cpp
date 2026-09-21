#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin>>n;
    ll even=0;
    ll odd=0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0) even++;
        else odd++;
    }
    if(even!=odd)
    cout<<2*(min(even,odd))+1<<endl;
    else
    cout<<2*even<<endl;
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