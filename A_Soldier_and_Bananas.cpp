#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    ll k,n,w;
    cin>>k>>n>>w;
    cout<< max(0LL,(k*w*(w+1)/2)-n)<<endl;
}