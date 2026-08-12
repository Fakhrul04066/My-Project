#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;
    int u=0;
    int l=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&& s[i]<='Z') u++;
        else l++;
    }
    if(u>l){
        for(int i=0;i<s.size();i++){
            s[i]=toupper(s[i]);
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
    }
        cout<<s;
    
}