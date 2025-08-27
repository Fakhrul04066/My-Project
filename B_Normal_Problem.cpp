#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    int tc;
    cin >> tc;
    while(tc--){
            string a;
            cin>>a;
            for(int i=a.length()-1;i>=0;i--){
                if(a[i]=='p') {
                    cout<<"q";
                }
                else if(a[i]=='q'){
                    cout<<"p";
                          }
            else{
                cout<<a[i];
            }
            }
            cout<<endl;
    }
}