#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll lSum=0,rSum=0;
    ll l=0,r=n-1;
    ll ans=0;
    while(l<=r){
       if(lSum>rSum){
        rSum+=a[r];
        r--;
       }
       else{
        lSum+=a[l];
        l++;
       }

        if(lSum==rSum){
            ans=max(ans,lSum);
        }
        
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