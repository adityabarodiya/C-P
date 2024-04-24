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

int sumOfArray(vi &v)
{
    int sum = 0;
    for (auto x : v)
    {
        sum += x;
    }
    return sum;
}

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

    int count = 0;
    for (int i = n - 1; i > 0; i--)
    {
        //
        if (v[i] == 0)
        {
            println(-1) return;
        }
        if (v[i] <= v[i - 1])
        {
            while (v[i] <= v[i - 1])
            {
                v[i - 1] /= 2;
                count++;
            }
        }
    }

    println(count)
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    clock_t z = clock();

    int t = 0;
    cin >> t;
    while (t--)
        solve();

    return 0;
}