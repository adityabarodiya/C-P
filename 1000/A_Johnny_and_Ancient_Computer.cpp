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
    int a , b;
    cin >> a >> b;

    int x = a ^ b;
    if(x == 0){
        pl(0);
        return;
    }
    int A = max(a,b);
    int B = min(a,b);

    if(A % B != 0){
        pl(-1);
        return;
    }

    int count = 0;
    int aa ;
    // for 8
    while(A > B && A != B){
        B*= 8;
        count++;
    }
    if(A < B){
        B /= 8;
        count--;
    }
    if(A == B) {
        pl(count)
        return;
    }

    // do same for 4
    while(A > B && A!= B){
        B*= 4;
        count++;
    }
    if(A < B){
        B /= 4;
        count--;
    }
    if(A == B) {
        pl(count)
        return;
    }
    // do same for 2
    while(A > B && A!= B){
        B*= 2;
        count++;
    }
    if(A < B){
        B /= 2;
        count--;
    }
    if(A == B) {
        pl(count)
        return;
    }else pl(-1)
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
