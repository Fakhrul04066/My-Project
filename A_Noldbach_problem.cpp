#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int a,k;
    cin>>a>>k;
    if(k==0){
        cout<<"YES"<<endl;
        return ;
    }
    if(k>=a) {
        cout<<"NO"<<endl;
        return ;
    }
    vector<bool>isPrime(a+1,true);
    vector<int>primes;
    for(int i=2;i<a;i++){
        if(isPrime[i]){
            primes.push_back(i);
            for(int j=2*i;j<=a;j=j+i){
                isPrime[j]=false;
            }
        }
    }
    int cnt=0;
    for(int i=0;i<primes.size()-1;i++){
        int x = primes[i] + primes[i + 1] + 1;
        if (x <= a && isPrime[x])
        {
            cnt++;
        }
        if(cnt>=k){
            cout<<"YES"<<endl;
            return ;
      }
    }
cout << "NO" << endl;
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