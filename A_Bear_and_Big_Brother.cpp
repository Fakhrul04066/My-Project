#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
   int a,b;
   cin>>a>>b;
   if(a==b) {
        cout<<1<<endl;
        return 0;
   }
   int i=1;
    for(;;){
        a*=3;
        b*=2;
        if(a>b){
            break;
        }
        else{
            i++;
        }
    }
    cout<<i<<endl;
}