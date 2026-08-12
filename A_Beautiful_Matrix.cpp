#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
     ll arr[5][5];
     for(ll i=0;i<5;i++){
          for(ll j=0;j<5;j++){
                cin>>arr[i][j];
                if(arr[i][j]==1){
                 cout<<abs(2-i)+abs(2-j)<<endl;
                }
          }
     }
}