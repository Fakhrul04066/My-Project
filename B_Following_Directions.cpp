#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l=0,r=0,u=0,d=0;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            r--;
        }
        else if(s[i]=='R'){
            r++;
        }
        else if(s[i]=='U'){
            u++;
        }
        else{
            u--;
        }
       
        if(r==1 && u==1){
            cout<<"YES"<<endl;
            return;
    }
    
}
cout << "NO" << endl;
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