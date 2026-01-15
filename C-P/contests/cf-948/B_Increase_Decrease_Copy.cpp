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
    cin >> n;
    vi a(n);
    inputArr(a);
    vi b(n+1);
    inputArr(b);
    int ans = 1;

    int l = b[n];

    int md = abs(a[0] - l);
    int g = 0,v = 0;

    for(int i = 0; i < n; i++){
        int d = abs(a[i] - l);
        md = min(md, d);
        int f = a[i];
        int s = b[i];
        if(a[i] == l) v = 1;
        if((f >= l && s <= l) || (f <= l && s >=l)) g = 1;  
    }
  
    if(g && v == 0) ans--;

    ans += md;

    for(int i = 0; i < n; i++){
        int d = abs(a[i] - b[i]);
        ans += d;
    }
    pl(ans);

    
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
