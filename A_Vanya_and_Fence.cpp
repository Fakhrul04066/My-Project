#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
        int a,n;
        cin>>a>>n;
        vector<int>v(a);
        int sum=0;
        for(int i=0;i<a;i++){
            cin>>v[i];
             if(v[i]<=n) sum++;
            else sum+=2;
        }
        cout<<sum<<endl;
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