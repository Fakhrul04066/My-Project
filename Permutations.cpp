#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long 
bool compare(int a,int b){
    return a>b;
}

int main(){
   int n;
   cin>>n;
   if(n==2 || n==3){
    cout<<"NO SOLUTION"<<endl;
    return 0;
   }
  else{
    vector<int> a;
    vector<int> b;
    for(int i=1;i<=n;i++){
        if(i%2==0){
           a.pb(i);
        }
}
    for(int i=1;i<=n;i++){
        if(i%2!=0){
          b.pb(i);
        }
    }
 for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
  }
    for(int i=0 ;i<b.size();i++){
        cout<<b[i]<<" ";
    }
}
}