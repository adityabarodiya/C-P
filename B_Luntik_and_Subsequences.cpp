/*
    Author - Aditya Barodiya

    LinkedIn - https://www.linkedin.com/adityabarodiya
    Github - https://github.com/adityabarodiya
    Codeforces - https://codeforces.com/profile/adityabarodiya
    CodeChef - https://www.codechef.com/users/adityabarodiya
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

bool isEven(int n)
{
    return (n & 1) == 0;
}

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    inputArr(v);
    int zero = 0;
    int one = 0;
    int x = 0;
    int f = 1;
    int j = 1;
    x = v[0];

    int sum = accumulate()
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            zero++;
        }
        else if (v[i] == 1)
        {
            one++;
        }
        if (v[j] != x)
            f = false;
    }
    if (f)
    {
        println(0);
        return;
    }

    println(one + zero + 1);
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
