#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    int a=-1, b=-1, c=-1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            a=i;
            n/=i;
            break;
        }
    }
    if(a==-1)
    {
        cout<<"NO"<<endl;
        return;
    }
    for(int i=a+1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            b=i;
            c=n/i;
            if(c!=a && c!=b && c>1)
            {
                cout<<"YES"<<endl;
                cout<<a<<" "<<b<<" "<<c<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;

}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}