#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    string a;
    int ans=0;
    cin>>a;
    unordered_map<char,int> mp;
    for(int i=0;i<a.size();i++){
        char first=a[i];
        if(mp.find(first)==mp.end()){
            mp[first]=i;
            ans++;
        }
    }
    if(ans%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}