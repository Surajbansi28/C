#include <iostream>
using namespace std;

int main() {
    int p[20], bt[20], pri[20], wt[20], tat[20], n, temp;
    float wtavg, tatavg;

    cout << "Enter the number of processes --- ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        p[i] = i;
        cout << "Enter the Burst Time & Priority of Process " << i << " --- ";
        cin >> bt[i] >> pri[i];
    }

    for (int i = 0; i < n; i++)
        for (int k = i + 1; k < n; k++)
            if (pri[i] > pri[k]) {
                temp = p[i];
                p[i] = p[k];
                p[k] = temp;

                temp = bt[i];
                bt[i] = bt[k];
                bt[k] = temp;

                temp = pri[i];
                pri[i] = pri[k];
                pri[k] = temp;
            }

    wtavg = wt[0] = 0;
    tatavg = tat[0] = bt[0];

    for (int i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
        tat[i] = tat[i - 1] + bt[i];

        wtavg = wtavg + wt[i];
        tatavg = tatavg + tat[i];
    }

    cout << "\nPROCESS\t\tPRIORITY\tBURST TIME\tWAITING TIME\tTURNAROUND TIME";
    for (int i = 0; i < n; i++)
        cout << "\n" << p[i] << "\t\t " << pri[i] << "\t\t " << bt[i] << "\t\t " << wt[i] << "\t\t " << tat[i];

    cout << "\nAverage Waiting Time is --- " << wtavg / n;
    cout << "\nAverage Turnaround Time is --- " << tatavg / n;

    return 0;
}
