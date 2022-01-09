// https://www.codechef.com/JAN221C/problems/COVSPRD
#include <iostream>
#include<math.h>
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
    cin>>t;
    while(t--)
    {
        int n, d;
        cin >> n >> d;
        long long infected_count = 0;
        if(d<=10)
        {
            infected_count = (long long)pow(2, d);

        }
        else
        {
            infected_count = (long long)pow(2, 10) * pow(3, d - 10);
        }
        cout << (infected_count < (long long)n ? infected_count : n)<<'\n';
    }



    return 0;
}
