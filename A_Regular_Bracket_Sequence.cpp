#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    if(n%2!=0 || s[0]==')'|| s[n-1]=='('){
        cout<<"NO"<<endl;
        return;
    }    
    else{
        cout<<"YES"<<endl;
        return;
    }
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