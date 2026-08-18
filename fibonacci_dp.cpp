#include <bits/stdc++.h>
using namespace std;

int fibDP(int n, vector<int> &f)
{

    if (n <= 1)
        return n;
    if (f[n] != -1)
        return f[n];
    return f[n] = fibDP(n - 1, f) + fibDP(n - 2, f);
}
int fibTabDp(int n){
    vector<int> f(n+1);
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++){
        f[i]=f[i-1]+f[i-2];
    }
    return f[n];
}

int main()
{
    int n;
    cin >> n;
    vector<int> f(n + 1, -1);
    cout << fibTabDp(n) << endl;
    cout << fibDP(n, f) << endl;
}