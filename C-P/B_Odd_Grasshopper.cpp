#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        long long x;
        cin >> x;
        long long n;
        cin >> n;
        long long z = 0;
        if (n % 4 == 0)
        {
            z = 0;
        }
        else if (n % 4 == 1)
        {
            z = -n;
        }
        else if (n % 4 == 2)
        {
            z = 1;
        }
        else
        {
            z = n + 1;
        }

        if (x & 1)
        {
            cout << x - z << endl;
        }
        else
        {
            cout << x + z << endl;
        }

        t--;
    }
}