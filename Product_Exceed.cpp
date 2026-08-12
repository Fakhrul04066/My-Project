#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

int solve()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x*y>=z){
        cout<<0<<endl;
        return  0;
    }
    int m=0;
    while(x*y<z){
        if(x<y){
            x++;
        }
        else{
            y++;
        }
        m++;
    }

    cout<<m<<endl;
    return 0;
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