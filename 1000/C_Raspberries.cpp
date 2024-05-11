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

#define pl(a) cout << a << endl;
#define p(a) cout << a << " ";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define el cout << "\n";
#define pb push_back
#define p(a, b) cout << a << " " << b << endl;
#define printArr(a)       \
    for (auto x : a)      \
        cout << x << " "; \
    cout << endl

#define all(x) x.begin(), x.end()

/*
    Start Solving from here ---------------------------------------------------------------------
*/
int SUM = 0;
void inputArr(vi &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int ele;
        cin >> ele;

        v[i] = ele;
        SUM += v[i];
    }
}

bool isOdd(int n)
{
    return (n & 1) == 1;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vi v(n);
    inputArr(v);
    int ans = 0;
    int f = 0;
    int even = 0;
    int f5 = 0;
    int f3 = 0;
    int f4 = 0;

    for (int i : v)
    {
        if (!isOdd(i))
        {
            even++;
        }
        if (i % k == 0)
        {
            cout << 0 << endl;
            return;
        }
        f5 = max(f5, i % 5);
        f3 = max(f3, i % 3);
        f4 = max(f4, i % 4);
    }

    if (k == 2)
    {
        if (even)
        {
            ans = 0;
        }
        else
            ans = 1;
    }
    // 3,5,3
    if (k == 4)
    {

        if (even >= 2)
        {
            ans = 0;
        }
        else if (even == 1)
        {
            ans = 1;
        }
        else if (f4 == 3)
        {
            ans = 1;
        }
        else if (even == 0)
        {
            ans = 2;
        }
        }

    if (k == 3)
    {
        ans = 3 - f3;
    }

    if (k == 5)
    {
        ans = 5 - f5;
    }

    cout << ans << endl;
    return;
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
    {
        solve();
        SUM = 0;
    }
    return 0;
}
