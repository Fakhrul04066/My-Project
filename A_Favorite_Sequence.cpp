#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin>>n;
    vector<int>s(n);
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    vector<int>ans(n);
    int l=0,r=n-1;
     for(int i=0;i<n;i++){
           if(i%2==0){
               ans[i] = s[l];
               l++;
           }
            else{
                ans[i]=s[r];
                r--;
            }
        }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
}
    cout<<endl;
    
    
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