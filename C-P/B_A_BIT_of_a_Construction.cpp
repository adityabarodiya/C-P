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
#define printArray(a)     \
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


    int i = 1;
    int mx = 0;
    if (n == 1)
    {
        println(k);
        return;
    }
    while (1)
    {

        mx = pow(2, i);

        if (mx > k)
        {
            break;
        }
        i++;
    }
    vi ans(0);

    int first = pow(2, i - 1) - 1;
    ans.pb(first);

    int second = k - first;

    ans.pb(second);
    i = n - 2;
    while (i > 0) // Modified loop condition to avoid infinite loop
    {
        ans.pb(0);
        i--;
    }
    printArray(ans);
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