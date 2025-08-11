#include <bits/stdc++.h>
using namespace std;

void select(int n, int wei[], int pro[], int tot) {
    vector<int> in(n);
    vector<double> rat(n);
    for (int i = 0; i < n; i++) {
        in[i] = i;
        rat[i] = (double)pro[i] / wei[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (rat[i] < rat[j]) {
                swap(rat[i], rat[j]);
                swap(in[i], in[j]);
            }
        }
    }
    int netW = 0;
    double tPro = 0;
    vector<int> take;
    for (int i = 0; i < n; i++) {
        int idx = in[i];
        if (netW + wei[idx] <= tot) {
            netW += wei[idx];
            tPro += pro[idx];
            take.push_back(idx + 1);
        } else {
            int remain = tot - netW;
            if (remain > 0) {
                double frac = (double)remain / wei[idx];
                netW += remain;
                tPro += pro[idx] * frac;
                 take.push_back(idx + 1);
            }
            break;
        }
    }
    cout << "Taken item: ";
    for (int i = 0; i < take.size(); i++) {
        cout << take[i] << " ";
    }
    cout << endl;
    cout << "Total Profit= " << tPro << endl;
}

int main() {
    int n;
    cin >> n;
    int wei[n], pro[n];
    for (int i = 0; i < n; i++) cin >> wei[i];
    for (int i = 0; i < n; i++) cin >> pro[i];
    int total;
    cin >> total;
    select(n, wei, pro, total);
    return 0;
}