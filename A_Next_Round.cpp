#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    ll a,b;
    cin >> a >> b;
    ll count=0;
    vector<int> v(a);
    for (ll  i = 0; i < a; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
   for( ll i=0;i<a;i++){
    if(v[i]>b){
        count ++;
    }
   }
    cout<<count<<endl;
}