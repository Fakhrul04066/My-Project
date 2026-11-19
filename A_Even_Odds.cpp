#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{   
    int n,k;
    cin>>n>>k;
    int odd=(n+1)/2;
    if(k<=odd){
        cout<<2*k-1<<endl;
    }
    else{
        cout<<2*(k-odd)<<endl;
    }
    
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