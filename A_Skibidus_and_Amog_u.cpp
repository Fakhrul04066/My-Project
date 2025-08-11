#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long
int main(){
    int tc;
    cin >> tc;
    while(tc--){
            char a[100];
            cin>>a;
            char res[100];
            int length=strlen(a);
            for( int i=0;i<length-2;i++){
                res[i]=a[i];
            }
            res[length-2]='i';
            res[length -1]='\0';
            cout<<res<<endl;
    }
}