#include <iostream>
#include <vector>

using namespace std;

int main() {
    int i, j, k, min, n, f, pf = 0, next = 1;
    vector<int> rs, m, count, flag;

    cout << "Enter the length of reference string -- ";
    cin >> n;

    cout << "Enter the reference string -- ";
    for (i = 0; i < n; i++) {
        int val;
        cin >> val;
        rs.push_back(val);
        flag.push_back(0);
    }

    cout << "Enter the number of frames -- ";
    cin >> f;

    count.resize(f, 0);
    m.resize(f, -1);

    cout << "\nThe Page Replacement process is -- \n";

    for (i = 0; i < n; i++) {
        for (j = 0; j < f; j++) {
            if (m[j] == rs[i]) {
                flag[i] = 1;
                count[j] = next;
                next++;
            }
        }

        if (flag[i] == 0) {
            if (i < f) {
                m[i] = rs[i];
                count[i] = next;
                next++;
            } else {
                min = 0;
                for (j = 1; j < f; j++)
                    if (count[min] > count[j])
                        min = j;
                m[min] = rs[i];
                count[min] = next;
                next++;
            }

            pf++;
        }

        for (j = 0; j < f; j++)
            cout << m[j] << "\t";

        if (flag[i] == 0)
            cout << "PF No. -- " << pf;

        cout << "\n";
    }

    cout << "\nThe number of page faults using LRU are " << pf;

    return 0;
}
