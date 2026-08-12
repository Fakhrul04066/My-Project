#include<bits/stdc++.h>
#include<string>
#define pb push_back
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int i = 0, j = 0;
        bool flag = true;
        while (i < s1.size() && j < s2.size())
        {
            if (s1[i] != s2[j])
            {
                flag = false;
                break;
            }
            char ch = s1[i];
            int cnts1 = 0;
            while (i < s1.size() && s1[i] == ch)
            {
                cnts1++;
                i++;
            }
            int cnts2 = 0;
            while (j < s2.size() && s2[j] == ch)
            {
                cnts2++;
                j++;
            }
            if (cnts2 < cnts1 || cnts2 > 2 * cnts1)
            {
                flag = false;
                break;
            }
        }
        if (i != s1.size() || j != s2.size())
            flag = false;
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}