// https://www.codechef.com/LRNDSA01/problems/ZCO14003
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

    long long n;
    cin >> n;
    vector<long long> budgets(n);
    for (auto &budget : budgets)
    {
        cin >> budget;
    }
    sort(budgets.begin(), budgets.end(), std::greater<>());

    long max_revenue = 0;
    for (int i = 0; i < n; i++)
    {
        long current_revenue = budgets[i] * (i + 1);
        if (current_revenue > max_revenue)
        {
            max_revenue = current_revenue;
        }
    }
    cout << max_revenue;
    return 0;
}
