#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    int tc;
    cin >> tc;
    while(tc--){
            int n;
            cin >> n;
            vector<int> a(n);
            for(int i=1;i<=n;i++){
                if(i%2!=0){
                    a[i-1] = -1;
                } else {
                   if(i==n && n%2==0) {
                       a[i-1] = 2;
                   } else {
                       a[i-1] = 3;
                   }
                }
            }
            for(int i=0;i<n;i++){
                cout << a[i] << " ";
            }
            cout<<"\n";

}
}