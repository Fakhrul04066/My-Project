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
        vector<int> a(n), b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        int dif=0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                dif+= a[i]-b[i];
            }
        }
        cout<<dif+1<<"\n";
    }
}