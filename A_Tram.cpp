#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n ;
    cin>> n;
   int a;
   int b;
    int pre=0;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        pre+=b-a;
        ans=max(ans,pre);
    }    
    cout<<ans<<endl;
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