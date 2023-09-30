#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &prices)
{
    int mini = prices[0];
    int profit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        int diff = prices[i] - mini;
        profit = max(profit, diff);
        mini = min(mini, prices[i]);
    }
    return profit;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = solve(a);
    cout << "Max profit is " << ans << endl;
}
