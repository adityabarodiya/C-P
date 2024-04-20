/*
    Author - Aditya Barodiya
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long int

#define vi vector<int>

#define println(a) cout << a << endl;
#define print(a) cout << a << " ";
#define yes cout << "YES\n";
#define no cout << "NO\n";

#define pb push_back
#define printArr(a)       \
    for (auto x : a)      \
        cout << x << " "; \
    cout << endl

#define all(x) x.begin(), x.end()

/*
    Start Solving from here ---------------------------------------------------------------------
*/

void inputArr(vi &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int ele;
        cin >> ele;
        v[i] = ele;
    }
}

void solve()
{
    int n;
    cin >> n;

    vi v(n);
    inputArr(v);
    int minimum = min(v[0], v[n - 1]);

    sort(all(v));
    println(v[n - 1] - minimum);
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // for fast input and output
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    clock_t z = clock();

    int t = 0;
    cin >> t;
    while (t--)
        solve();

    return 0;
}