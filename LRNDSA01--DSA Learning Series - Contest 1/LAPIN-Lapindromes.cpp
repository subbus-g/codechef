//time complexity = O(nlogn) 
//space complexity = O(1)
#include <iostream>
#include <bits/stdc++.h>
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
    while (T--)
    {
        string S;
        cin >> S;
        int n = S.size();

        //sort first half
        sort(S.begin(), S.begin() + n / 2);

        //sort second half
        sort(S.begin() + ceil(n / 2.0f), S.end());

        bool is_lapin = true;

        //compare each character of first half with that of second half
        for (int i = 0, j = ceil(n / 2.0f); i < n / 2; i++, j++)
        {
            //if there are different characters in the same positions of two halves
            //then they are not lapindromes
            if (S[i] != S[j])
            {
                is_lapin = false;
                break;
            }
        }
        cout << (is_lapin ? "YES" : "NO") << endl;
    }

    return 0;
}
