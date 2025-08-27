#include<bits/stdc++.h>
#define pb push_back
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while(tc--){
        ll n,k;
        cin >> n >> k;
        vector<ll> a(n), b(n);
        for(ll i=0;i<n;i++) cin >> a[i];
        for(ll i=0;i<n;i++) cin >> b[i];
        map<ll,ll> cntA, cntB;
        for(ll i=0;i<n;i++) cntA[a[i] % k]++;
        for(ll i=0;i<n;i++) cntB[b[i] % k]++;

        bool ok = true;
        for(auto &p : cntA){
            ll r = p.first;
            if(r == 0 || (k % 2 == 0 && r == k/2)){
                if(cntA[r] != cntB[r]){
                    ok = false;
                    break;
                }
            } else if(r < k-r){
                ll sumA = cntA[r] + cntA[k-r];
                ll sumB = cntB[r] + cntB[k-r];
                if(sumA != sumB){
                    ok = false;
                    break;
                }
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}
