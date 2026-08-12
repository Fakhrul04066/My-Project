#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Number of process: ";
    cin >> n;
    vector<int> at(n), bt(n), st(n), wt(n), tat(n), pid(n);
    for (int i = 0; i < n; i++)
    {
        pid[i] = i + 1;
        cin >> bt[i];
        cin >> at[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (at[i] > at[j])
            {
                swap(at[i], at[j]);
                swap(bt[i], bt[j]);
                swap(pid[i], pid[j]);
            }
        }
    }
    int current_time = 0;
    float total_wt = 0, total_tat = 0;
    cout << "\nGantt Chart\n";
    for (int i = 0; i < n; i++)
    {
        if (current_time < at[i])
            current_time = at[i];
        st[i] = current_time;
        wt[i] = st[i] - at[i];
        tat[i] = wt[i] + bt[i];
        cout << st[i] << " P" << pid[i] << " ";
        current_time += bt[i];
        total_wt += wt[i];
        total_tat += tat[i];
    }
    cout << current_time << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Process: P" << pid[i]
             << " St: " << st[i]
             << " Wt: " << wt[i]
             << " Tut: " << tat[i] << endl;
    }
    cout << "Average waiting time : " << total_wt / n << endl;
    cout << "Average turnaround time : " << total_tat / n << endl;
    return 0;
}