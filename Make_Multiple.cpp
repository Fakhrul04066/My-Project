#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void  solve()
{
    int a;
    cin >> a;
    if (a%3==0){
        cout<<"0"<<endl;
        return ;
    }
    if (a%3==2){
        cout<<"1"<<endl;
        return ;
    }
    int n5=((a/5)+1) * 5;
    if(n5%3==0){
        cout<<"1"<<endl;
    }
    else{
        cout<<"2"<<endl;
    }
    return ;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}