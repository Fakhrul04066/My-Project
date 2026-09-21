#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=1;
    int maxx=1;
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
            cnt++;
        }
   
        else{
            
            cnt=1;
        }
        maxx = max(maxx, cnt);
    }
    
    cout<<maxx<<endl;
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