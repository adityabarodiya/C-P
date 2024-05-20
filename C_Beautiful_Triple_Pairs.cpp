#include <iostream>
#include <vector>
using namespace std;

int countBeautifulPairs(vector<int>& a) {
    int beautiful_pairs = 0;
    int n = a.size();

    for (int i = 1; i < n - 1; ++i) {
        if (a[i] != a[i - 1])
            beautiful_pairs++;  // Condition 1
        if (a[i] != a[i + 1])
            beautiful_pairs++;  // Condition 2
        if (a[i - 1] != a[i + 1] && a[i - 1] == a[i + 2])
            beautiful_pairs++;  // Condition 3
    }

    return beautiful_pairs;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        
        cout << countBeautifulPairs(a) << endl;
    }

    return 0;
}
