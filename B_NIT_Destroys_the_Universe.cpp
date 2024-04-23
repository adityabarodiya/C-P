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

void inputArr(vi &v)
{//
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
    int f = 1;
    int count = 0;

    for (int i : v)
    {
        if (i != 0 && f)
        {   
            // increase counter 
            count++;
            f = !f;
        }
        if (i == 0) f = 1;
    }
    if(count > 2) count = 2;

    println(count);
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    clock_t z = clock();

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}