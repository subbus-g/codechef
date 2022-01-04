// https://www.codechef.com/LRNDSA01/problems/ZCO14003
// https://github.com/subbus-g/codechef/blob/4533209b536150673475f2796d9cbaebb3331e76/LRNDSA01--DSA%20Learning%20Series%20-%20Contest%201/ZCO14003-Smart%20Phone.cpp
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

    int n;
    cin >> n;
    vector<int> budgets(n);
    for (auto &budget : budgets)
    {
        cin >> budget;
    }
    //sort the budgets in desceding order
    sort(budgets.begin(), budgets.end(), std::greater<>());

    long long max_revenue = 0;
    for (int i = 0; i < n; i++)
    {
        //budget of a given customer as fixed price * no of customers whose budget is less than or equal to given customer budget gives the revenue
        max_revenue = max(max_revenue, (long long)budgets[i] * (i + 1));
    }
    cout << max_revenue;
    return 0;
}
