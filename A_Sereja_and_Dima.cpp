#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s=0,d=0;
    bool se=true;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int i=0,j=n-1;
    while(i<=j){
        int take;
        if(a[i]>a[j]){
            take=a[i];
            i++;
        }
        else{
            take=a[j];
            j--;
        }
        if(se){
            s+=take;
            se=false;
        }
        else{
            d+=take;
            se=true;
        }
    }
    cout << s << " " << d << endl;
}