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
    int n;
    long long k;
    cin >> n >> k;

    long long max_sum = 0;
    for (int i = 0; i < n; i++)
        max_sum += abs(n - 1 - i - i); // Calculate max sum correctly

    if (k % 2 != 0 || k > max_sum)
    {
        cout << "No\n";
    }
    else
    {
        yes;
        vi permutation(n);
        k /= 2;
        iota(permutation.begin(), permutation.end(), 1); // Initialize permutation with values 1 to n

        for (int i = 0; k > 0; i++)
        {
            if (k >= n - 1 - 2 * i)
            {
                swap(permutation[i], permutation[n - 1 - i]);
                k -= n - 1 - 2 * i;
            }
            else
            {
                swap(permutation[i], permutation[i + k]);
                k = 0;
            }
        }

        printArr(permutation);
    }
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
