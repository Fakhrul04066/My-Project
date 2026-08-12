#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
   string s;
    cin>>s;
    char a=s[0];
    cout<<(char)toupper(a);
    for(int i=1;i<s.size();i++){
        cout<<(char)(s[i]);
    }
}