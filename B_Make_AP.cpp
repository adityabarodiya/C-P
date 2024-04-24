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
bool isEven(int x){
    return x%2==0;
}
int sumOfArray(vi &v)
{
    int sum = 0;
    for (auto x : v)
    {
        sum += x;
    }
    return sum;
}

void inputArr(vi &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int ele;
        cin >> ele;
        v[i] = ele;
    }
}

void solve()
{
    int a , b , c ;
    cin >> a >> b >> c ;

    int diff1 = abs(a-b);
    int diff2 = abs(b-c);

    if((isEven(diff1) && isEven(diff2)) || (!isEven(diff1) && !isEven(diff2))){
        yes;
    }else no;
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