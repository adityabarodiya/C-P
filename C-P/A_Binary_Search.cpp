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

void binarySearch(vi &v, int target)
{
    int low = 0;
    int high = v.size() - 1;
    int f = 0;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (v[mid] == target)
        {
            f = 1;
        }
        else if (v[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (f == 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vi v(n);
    inputArr(v);
    vi q(k);
    inputArr(q);

    for (int i : v)
    {
        binarySearch(v, i);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    clock_t z = clock();
    solve();
    return 0;
}
