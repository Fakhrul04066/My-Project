#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin>>n;
        ll a[n];
        ll b[n];
        ll c[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            c[i]=a[i]+b[i];
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(c[i]!=c[i+1]) cnt++;
        }
        if(cnt>=3) cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }
}