#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    vector<char> a(n);
    int cntS=0,cntH=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]=='*') cntS++;
        else cntH++;
    }

    if(cntH==0){
        cout<<0<<endl;
        return;
    }
    cntH=0;
    int maxx=0;
    for(int i=0;i<n;i++){
        if(a[i]=='#') cntH++;
        else{
            maxx=max(cntH,maxx);
            cntH=0;
        }
    }
    maxx=max(cntH,maxx);
    if(maxx%2==0) cout<<maxx/2<<endl;
    else cout<<maxx/2+1<<endl;
    return;
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