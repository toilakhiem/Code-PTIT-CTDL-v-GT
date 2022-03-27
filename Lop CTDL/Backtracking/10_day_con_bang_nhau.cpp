#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int n, sum, j;
bool partition(int n, vector<int> &arr, int s, vector<vector<int>> &t)
{
    if (s == 0)
        return 1;
    if (n <= 0)
        return 0;
    if (t[n][s] != -1)
        return t[n][s];
    if (arr[n - 1] <= s)
    {
        t[n][s] = partition(n - 1, arr, s - arr[n - 1], t) || partition(n - 1, arr, s, t);
        return t[n][s];
    }
    else
    {
        t[n][s] = partition(n - 1, arr, s, t);
        return t[n][s];
    }
}
bool canPartition(vector<int> &a)
{
    int s = accumulate(a.begin(), a.end(), 0);
    if (s % 2 != 0)
        return false;

    int target = s / 2, n = a.size();
    vector<vector<int>> t(n + 1, vector<int>(target + 1, -1));
    return partition(n, a, target, t);
}
void testcase()
{
    cin >> n;
    v.clear();
    for (int i = 0; i < n;i++){
        cin >> j;
        v.push_back(j);
    }
    if(canPartition(v))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}