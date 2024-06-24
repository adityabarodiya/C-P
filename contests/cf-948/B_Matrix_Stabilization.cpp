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
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    bool changed = true;
    while (changed)
    {
        changed = false;
        int f1  = 0 , f2 = 0 , f3 = 0 , f4 = 0 ;
        // Iterate over each cell in the matrix
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (i > 0 && matrix[i][j] > matrix[i - 1][j])
                {
                    matrix[i][j]--; // Decrease aij by 1
                    changed = true;
                    f1 = 1;
                }
                if (i < n - 1 && matrix[i][j] > matrix[i + 1][j])
                {
                    matrix[i][j]--;
                    changed = true;
                    f2 = 1;
                }
                if (j > 0 && matrix[i][j] > matrix[i][j - 1])
                {
                    matrix[i][j]--;
                    changed = true;
                    f3 = 1;
                }
                if (j < m - 1 && matrix[i][j] > matrix[i][j + 1])
                {
                    matrix[i][j]--;
                    changed = true;
                    f4 = 1;
                }
            }
        }

        if(!f1 && !f2 && !f3 && !f4) break;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
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
