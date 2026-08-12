#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    string s;
    int n;
    cin>>n;
    cin>>s;

    if(s.size()<26){ cout<<"NO"<<endl;
        return; }
    vector<int> c(26,0);
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
        c[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(c[i]==0) {
            cout << "NO" << endl;
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