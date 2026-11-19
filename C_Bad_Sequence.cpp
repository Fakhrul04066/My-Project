#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> st;
    int op=0,ex=0;
    for(char c:s){
        if(c=='('){
            st.push(c);
            op++;
    }
    else{
        if(!st.empty()){
            st.pop();
        }
        else{
            ex++;
        }
    }
}
    if(op*2==n && ex<=1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
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