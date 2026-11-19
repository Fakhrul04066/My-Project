#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    string s;
    cin>>s;
    n=s.size();
    int res=INT_MAX;
    int cnt1=0;
    int cnt2=0,cnt3=0;
    int l=0,r=0;
    for(r=0;r<n;r++){
        if(s[r]=='1') cnt1++;
        else if(s[r]=='2')cnt2++;
        else cnt3++;
        while(cnt1>0 && cnt2>0 && cnt3>0){
            res=min(res,r-l+1);
            if (s[l] == '1')
                cnt1--;
            else if (s[l] == '2')
                cnt2--;
            else
                cnt3--;
            l++;
        }
        
    }
    if(res==INT_MAX){
        cout<<0<<endl;
    }
    else{
        cout<<res<<endl;
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