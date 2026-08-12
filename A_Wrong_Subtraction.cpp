#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    int n,k;
    cin>>n>>k;
    while (k>0){
        if(n%10!=0){
            n--;
        }
        else{
            n=n/10;
        }
        k--;
    }
    cout<<n;
}