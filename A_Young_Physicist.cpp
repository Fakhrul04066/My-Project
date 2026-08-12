#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
   int x=0,y=0,z=0;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        x+=a;
        y+=b;
        z+=c;
    }
    if(x==0 && y==0 && z==0) cout<<"YES";
    else cout<<"NO";
}