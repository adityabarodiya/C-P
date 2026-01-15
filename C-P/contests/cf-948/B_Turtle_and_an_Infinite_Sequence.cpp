#include <bits/stdc++.h>
using namespace std;

void processTestCase(int n, int m);
int calculateResult(int n, int m);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        processTestCase(n, m);
    }
    return 0;
}

void processTestCase(int n, int m) {
    if (n == 0) {
        if (m == 0) {
            cout << 0 << "\n";
        } else {
            int bit = 1;
            while (m >> bit) bit++;
            cout << (1 << bit) - 1 << "\n";
        }
    } else {
        int result = calculateResult(n, m);
        cout << result << "\n";
    }
}

int calculateResult(int n, int m) {
    int ans = 0;
    for (int i = 0; i < 32; i++) {
        if ((n >> i) & 1) {
            ans += (1 << i);
        } else {
            int pos = (n - ((n >> i) << i));
            if (m >= (pos + 1)) {
                ans += (1 << i);
            } else if (m >= (1 << i) - pos) {
                ans += (1 << i);
            }
        }
    }
    return ans;
}
