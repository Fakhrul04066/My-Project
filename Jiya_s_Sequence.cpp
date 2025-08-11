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
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll pro=1;
        for(int i=0;i<n;i++){
            pro=pro*a[i];
        }
        int lsb=pro%10;
        if(lsb==2 || lsb==3 || lsb==5){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}