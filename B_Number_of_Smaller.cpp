#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    vector<int>v1(a);
    for(int i=0;i<a;i++){
        cin>>v1[i];
    }
    vector<int>v2(b);
    for(int i=0;i<b;i++){
        cin>>v2[i];
    }
    int res=0;
    for(int i=0;i<b;i++){
        while(res<a && v1[res]<v2[i]){
            res++;
        }
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