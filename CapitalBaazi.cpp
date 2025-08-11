#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    string s;
    getline(cin,s);
    int a=s.length();
    for(int i=0;i<a;i++){
        if(s[i]==' '){
            cout<<endl;
        }
        else{
            s[i]=s[i]-32;
            cout<<s[i];
        }
    }
}