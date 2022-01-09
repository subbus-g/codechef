#include <iostream>
// #include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("..\\in.txt", "r", stdin);
    freopen("..\\out.txt", "w", stdout);
#endif
    std::ios::sync_with_stdio(false);

    /*******************code starts from here********************************/

    int t;
    cin >> t;
    while (t--)
    {
        int t1, t2, r1, r2;
        cin >> t1 >> t2 >> r1 >> r2;
        cout << ((long long)t1 * t1 * r2 * r2 * r2 == (long long)t2 * t2 * r1 * r1 * r1 ? "Yes" : "No") << '\n';
    }

    return 0;
}
