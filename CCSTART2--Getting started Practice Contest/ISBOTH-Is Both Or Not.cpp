// https://www.codechef.com/CCSTART2/problems/ISBOTH/
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

    int n;
    cin >> n;
    //divisible by both 5 and 11
    if (n % 55 == 0)
    {
        cout << "BOTH";
    }
    //not divisible by both but if divisible by any one
    else if (n % 11 == 0 || n % 5 == 0)
    {
        cout << "ONE";
    }
    //note divisible by any
    else
    {
        cout << "NONE";
    }

    return 0;
}
