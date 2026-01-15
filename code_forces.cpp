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
    int n, k;
    cin >> n >> k;
    vi v(n);
    inputArr(v);
    sort(all(v));
    int c = 1, maxDiff = 1;
    if(n == 1) {
        cout << 0 << endl;
        return;
    }

    for (int i = 0; i < n-1; i++)
    {
        int diff = (v[i + 1] - v[i]);
        if (diff <= k)
        {
            c++;
            maxDiff = max(maxDiff, c);
        }
        else
            c = 1;
    }

    println(n-maxDiff);
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