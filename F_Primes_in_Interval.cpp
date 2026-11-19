#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

 void solve() {
        int a,b;
        cin>>a>>b;
        vector<bool>isPrime(b+1,true);
        int cnt=0;
        for(int i=2;i<=b;i++){
            if(isPrime[i]){
                if(i>=a)cnt++;
                for(int j=i*i;j<=b;j=j+i){
                    isPrime[j]=false;
                }
            }
        }
        cout<< cnt<<endl;
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