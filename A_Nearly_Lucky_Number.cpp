#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main(){
    string s;
    cin >> s;
    int countLucky = 0;
    for (char ch : s)
    {
        if (ch == '4' || ch == '7')
        {
            countLucky++;
        }
    }
    if (countLucky == 4 || countLucky == 7)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}