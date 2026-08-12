#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    string s;
    cin >> s;
    int a=s.size();
    string t;
    cin >> t;
    if(a!=t.size()){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<a;i++){
        if(t[i]!=s[a-i-1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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