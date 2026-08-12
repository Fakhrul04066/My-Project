#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    int n;
    string s;
    cin>>n>>s;
    int countA=0;
    int countD=0;
    for (char ch : s)
    {
        if (ch == 'A')
        {
            countA++;
        }
        else if(ch=='D')
        {
            countD++;
        }
        if(countA>n/2){
            cout<<"Anton\n";
            return 0;
        }
        else if(countD>n/2){
            cout<<"Danik\n";
            return 0;
        }
    }
    cout<<"Friendship\n";
}