#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }  
    int cnt=0;                                                               
    sort(a.begin(), a.end());                                      
    int l=0, r=n-1;
    while(l<r){
        int sum=a[l]+a[r];
        if(sum==k){
                cnt++; 
                l++;
                r--;
        }
        else if(sum<k){
            l++;
        }
        else{
            r--;
        }
    }
    cout<<cnt<<endl;

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