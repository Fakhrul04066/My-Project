#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin>>n;
    int s;
    cin>>s;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0;
    int maxlen=-1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        while(sum>s){
            sum-=a[l];
            l++;
        }
        if(sum==s){
            maxlen=max(maxlen,i-l+1);
        }
    }
    if(maxlen==-1){
        cout<<-1<<endl;
    }
    else{
        cout<<n-maxlen<<endl;
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