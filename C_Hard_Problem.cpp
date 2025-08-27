#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    int tc;
    cin >> tc;
    while(tc--){
            ll m,a,b,c;
            ll res1, res2,res3;
            cin>>m>>a>>b>>c;
            res1= min(a,m);
            res2= min(b,m);
            ll left= 2*m - (res1+res2);
            res3= min(c,left);
            cout<<res1+res2+res3<<endl;
            
            
    }
}