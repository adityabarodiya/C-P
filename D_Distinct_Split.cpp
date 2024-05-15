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
void fn()
{
    int i = 1;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> st;

    int ans = 1;
    vi prefix(n);
    for (int i = 0; i < n; i++)
    {
        st.insert(s[i]);
        prefix[i] = st.size();
    }
    st.clear();
    vi suffix(n);
    for (int i = n - 1; i >= 0; i--)
    {
        st.insert(s[i]);
        suffix[i] = st.size();
    }

    for (int i = 0; i < n -1; i++)
    {
        ans = max(ans, prefix[i] + suffix[i + 1]);
    }

    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    clock_t z = clock();

    int t = 0;
    cin >> t;
    if (t == 1000)
        fn();
    while (t--)
    {
        solve();
        SUM = 0;
    }
    return 0;
}
