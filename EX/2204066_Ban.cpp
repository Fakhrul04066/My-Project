#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter number of processes: ";
    cin >> n;

    cout << "Enter number of resource types: ";
    cin >> m;

    vector<vector<int>> allocation(n, vector<int>(m));
    vector<vector<int>> maxNeed(n, vector<int>(m));
    vector<vector<int>> need(n, vector<int>(m));
    vector<int> available(m);
    vector<int> work(m);
    vector<bool> finish(n, false);
    vector<int> safeSequence;

    cout << "Enter Allocation Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> allocation[i][j];
        }
    }

    cout << "Enter Maximum Need Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> maxNeed[i][j];
        }
    }

    cout << "Enter Available Resources:\n";
    for (int j = 0; j < m; j++)
    {
        cin >> available[j];
        work[j] = available[j];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            need[i][j] = maxNeed[i][j] - allocation[i][j];
        }
    }

    int count = 0;

    while (count < n)
    {
        bool found = false;

        for (int i = 0; i < n; i++)
        {
            if (!finish[i])
            {
                bool canAllocate = true;

                for (int j = 0; j < m; j++)
                {
                    if (need[i][j] > work[j])
                    {
                        canAllocate = false;
                        break;
                    }
                }

                if (canAllocate)
                {
                    for (int j = 0; j < m; j++)
                    {
                        work[j] += allocation[i][j];
                    }

                    safeSequence.push_back(i);
                    finish[i] = true;
                    found = true;
                    count++;
                }
            }
        }

        if (!found)
        {
            break;
        }
    }

    cout << "\nNeed Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << need[i][j] << " ";
        }
        cout << endl;
    }

    if (count == n)
    {
        cout << "\nSystem is in a SAFE state.\n";
        cout << "Safe Sequence: ";
        for (int i = 0; i < safeSequence.size(); i++)
        {
            cout << "P" << safeSequence[i];
            if (i != safeSequence.size() - 1)
            {
                cout << " -> ";
            }
        }
        cout << endl;
    }
    else
    {
        cout << "\nSystem is NOT in a SAFE state.\n";
    }

    return 0;
}