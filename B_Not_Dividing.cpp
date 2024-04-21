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
        if(ele == 1) ele++;
        v[i] = ele;
    }
}

bool isEven(int n)
{
    return n & 1 == 0;
}

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    inputArr(v);
// 

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
            continue;

        
        if (v[i + 1] % v[i] == 0)
            v[i + 1]++;
    }
    printArr(v);
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