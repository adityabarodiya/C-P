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
    char c;
    string s;
    cin >> n >> c >> s;

    int mx = 0;
    int cnt = 0;
    string t = s + s;
    if (c == 'g')
    {
        pl(0);
        return;
    }
    int i = 0;
    int j = 1;
    while (j < 2 * n)
    {
        if (t[i] == c)
        {
            if (t[j] != 'g')
            {
                cnt++;
                j++;
            }
            else
            {
                cnt = 0;
                i = j + 1; 
                j = i + 1; 
            }
        }
        else
        {
            i++;
            j++;
        }
        mx = max(mx, cnt);
    }

    pl(1+mx);
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
