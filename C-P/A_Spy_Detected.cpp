/*
    Author - Aditya Barodiya

    LinkedIn - https://www.linkedin.com/adityabarodiya
    Github - https://github.com/adityabarodiya
    Codeforces - https://codeforces.com/profile/adityabarodiya
    CodeChef - https://www.codechef.com/users/adityabarodiya
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        vector<int> v2(n);
        for (int i = 0; i < n; i++)
        {
            int e;
            cin >> e;
            v[i] = e;
            v2[i] = e;
        }

        sort(v.begin(), v.end());

        int e1 = v[0];
        int e2 = v[n - 1];
        int f1 = 0, f2 = 0;

        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] == e1)
                f1 = 1;
            if (v[i] == e2)
                f2 = 1;
        }

        int ele;
        if (f1)
            ele = e2;
        else
            ele = e1;

        int i = 0;
        while (i < n)
        {
            if (v2[i] == ele)
                break;
            i++;
        }
        cout << i + 1 << endl;
    }
    return 0;
}