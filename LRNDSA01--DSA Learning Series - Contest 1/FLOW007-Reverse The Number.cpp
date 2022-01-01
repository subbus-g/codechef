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

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int reversed_number = 0;
        for (; N; N /= 10)
        {
            // 0 is appended to the given number
            //23 -> 230
            reversed_number *= 10;
            //take the last digit of given number
            //9874 -> 4
            int last_digit = N % 10;
            //add the last digit
            //230 -> 234
            reversed_number += last_digit;
        }
        cout << reversed_number << endl;
    }

    return 0;
}
