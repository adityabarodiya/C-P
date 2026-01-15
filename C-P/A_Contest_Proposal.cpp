#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int newProblems = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                int diff = a[i] - b[i];
                newProblems ++;
                for (int j = i; j < n; j++) {
                    a[j] --;
                }
            }
        }

        cout << newProblems << endl;
    }

    return 0;
}
