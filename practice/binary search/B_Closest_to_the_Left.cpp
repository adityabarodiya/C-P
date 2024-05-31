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

bool closet/(const vi &v, int target){
    int l = 0, r = v.size() -1;
    while(l <= r){
        int mid = (l + r)/2;
        if(v[mid] == target) return true;
        else if(v[mid] > target) r = mid - 1;
        else l = mid + 1;
    }
    return false;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vi v(n);
    inputArr(v);

    vi a(k);
    inputArr(a);

    for(int i : a){
        if(isPresent(v,i)) {
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
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
