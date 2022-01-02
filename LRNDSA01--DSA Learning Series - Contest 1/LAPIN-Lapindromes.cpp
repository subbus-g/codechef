#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("..\\in.txt", "r", stdin);
    freopen("..\\out.txt", "w", stdout);
#endif
    std::ios::sync_with_stdio(false);

    /*******************code starts from here********************************/

    int T;
    cin >> T;
    while(T--)
    {
        string S;
        cin >> S;
        int n = S.size();

        //sort first half
        sort(S.begin(), S.begin() + n/2);

        //sort second half
        sort(S.begin()+ ceil(n/2.0f), S.end());

        //compare two halves
        cout << (S.substr(0,n/2) == S.substr(ceil(n/2.0f),n/2)? "YES" : "NO") << endl;
    }

    return 0;
}
