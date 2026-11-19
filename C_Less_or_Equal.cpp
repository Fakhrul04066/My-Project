#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  
    sort(a.begin(),a.end());
    if (k == 0)
    {
        if (a[0] > 1)
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << -1 << endl;
            return;
        }
    }
    if(k<n && a[k-1]==a[k]){
        cout<<-1<<endl;
        return;
    }
    else{
        cout<<a[k-1]<<endl;
        return;
    }
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