#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    int tc;
    cin >> tc;
    while(tc--){
            ll n;
            cin>>n;
            ll sum=0;
            for(ll i=1;i<=n;i++){
                sum+=i;
            }
            cout<<sum<<endl;
    }
}