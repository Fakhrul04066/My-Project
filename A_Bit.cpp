#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    int tc;
    cin >> tc;
    ll x=0;
    for(int i=0;i<tc;i++){
        string s;
        cin>>s;
        if(s[1]=='+'){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x<<endl;
}