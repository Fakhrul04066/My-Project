#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    ll t;
    cin >> t;
    int count=0;
    for (int  i = 0; i < t; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2){
            count++;
        }
    }

    cout<<count<<endl;   
    
}