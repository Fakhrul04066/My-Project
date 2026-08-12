#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;
    vector<char>a;
    for(int i=0;i<s.size();i++){
        a.pb(s[i]);
        i+=1;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size()-1;i++){
        cout<<a[i]<<"+";
    }
    cout<<a[a.size()-1]<<endl;
}
