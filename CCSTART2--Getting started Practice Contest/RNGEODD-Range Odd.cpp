//https://www.codechef.com/CCSTART2/problems/RNGEODD
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

    int l, r;
    cin >> l >> r;
    //start from l+1 if l is even
    for (int i = l + (l % 2 == 0); i <= r; i += 2)
    {
        cout << i << ' ';
    }

    return 0;
}
