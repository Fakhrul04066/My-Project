#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    int n;
    string s;
    cin>>n>>s;
    int ans=0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            ans++;
        }
    }
    cout<<ans<<endl;
}