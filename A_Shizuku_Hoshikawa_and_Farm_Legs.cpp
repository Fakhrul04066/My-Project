#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int i;
        cin>> i;
        if (i%2!=0){
            cout <<'0'<< endl;
            continue;
        }
        else {
            cout << ceil(i/4)+1 << endl;
            continue;
        }
    }
}