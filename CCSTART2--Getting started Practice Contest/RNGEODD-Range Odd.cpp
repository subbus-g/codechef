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
    //if l is odd,assign to i
    //if l is not odd, assign the next number to i(which is odd)
    for (int i = (l % 2 ? l : l + 1); i <= r; i += 2)
    {
        cout << i << ' ';
    }

    return 0;
}
