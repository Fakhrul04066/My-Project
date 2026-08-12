#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;
    for (int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
       if(s[i]=='a'||s[i]=='o'||s[i]=='e'||s[i]=='i'||s[i]=='u'||s[i]=='y') continue;
       else cout<<'.'<<s[i];
    }
}