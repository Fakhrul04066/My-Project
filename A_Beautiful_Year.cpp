#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int a;
    cin>>a;
    while(true){
       int p=++a;
        int b=p%10;
        p/=10;
        int c=p%10;
        p/=10;
        int d=p%10;
        p/=10;
        int e=p;
        if(b!=c && b!=d && b!=e && c!=d && c!=e && d!=e){
            cout<<a<<endl;
            break;
        }
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