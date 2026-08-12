#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    int tc;
    cin >> tc;
    while(tc--){
            string s;
            cin>>s;
            ll length= s.length();
            if(length>10){
                cout<<s[0]<<length-2<<s[length-1]<<endl;
            }
            else{
                cout<<s<<endl;
            }
    }
}