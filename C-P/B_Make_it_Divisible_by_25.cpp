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

int helper(string &c, string &n)
{
    int count = 0;
    int i = n.size() - 1;
    while (i >= 0 && n[i] != c[1])
    {
        i--;
        count++;
    }
    int j = i - 1;
    while (j >= 0 && n[j] != c[0])
    {
        j--;
        count++;
    }
    return count;
}

void solve()
{
    int n;
    cin >> n;
    string s = to_string(n);
    int mn = 1e9;

    vector<string> cases = {"00", "25", "50", "75"};

    for (auto i : cases)
    {
        int ans = helper(i, s);
        mn = min(mn, ans);
    }
    println(mn);
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
