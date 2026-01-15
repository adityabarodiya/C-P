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
#define pv(a)       \
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
    vi v(n);
    inputArr(v);
    int l = 0, r = 0;
    vi ans(0);
    map<int , int> freq;

    for (int i = 0; i < n; i++){
        freq[v[i]]++;
    }
    
    
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            r++;
        }
        else
        {
            int t = abs(r - l);
            ans.pb(r+1);
            int j = l;

            while (t--)
            {
                {
                    ans.pb(j+1);
                    j++;
                }
            }
            l = i + 1;
            r = i + 1;
        }
    }
    pv(freq);
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
