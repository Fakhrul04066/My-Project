#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;
    int countA=0;
    int countB=0;
    for (char ch : s)
    {
        if (ch == '1')
        {
            countA++;
            countB=0;
        }
        else if(ch=='0')
        {
            countB++;
            countA=0;
        }
        if(countA==7 || countB==7){
            cout<<"YES\n";
            return 0;
        }
    }   
    cout<<"NO\n";
    return 0;
}