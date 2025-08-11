#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        string s;
        cin>>s;
        int sum=0;
        for (int i = 0; i <n; i++) {
            if(s[i]=='1'){
                sum=sum+pow(2,n-1-i);
        }
    }
        cout<<sum<<endl;
    }
    return 0;
}
