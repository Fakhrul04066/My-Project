#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll g=0;
    for(int i=0;i<n;i++){
        if( s[i]=='1' && (i==0 || s[i-1]=='0')) g++;
    }
    cout<<g<<endl;
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