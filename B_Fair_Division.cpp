#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    ll n;
    ll sum=0;
    cin>>n;
    vector<ll> a(n);
    ll one=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]==1) one++;
    }
    if(sum%2!=0){
        cout<<"NO"<<endl;
        return;
    }
   ll t=sum/2;
   if(t%2==1 && one==0){
    cout<<"NO"<<endl;
   }
   else{
    cout<<"YES"<<endl;
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