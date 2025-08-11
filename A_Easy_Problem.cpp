#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
const int N = 1e7+10;
int hsh[N];
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        hsh[a[i]]++;
        }
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin>> n;
        cout<<hsh[n]<<endl;
    }
}