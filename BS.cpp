#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
void BS(int a[],int c,int key){
    int l=0;
    int r=c-1;
    while (l<=r){
        int mid=(l+r)/2;
        if(key==a[mid]){
            cout<<"LOC= "<<mid+1;
            return ;
        }
        else if(key>a[mid]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<"NOT FOUND";
    return;
}

int main(){
    int i;
        cin>>i;
    int* a= new int [i];
    for(int j=0;j<i;j++){
        cin>>a[j];
    }
    int key;
    cin>>key;
    BS(a,i,key);
        
}