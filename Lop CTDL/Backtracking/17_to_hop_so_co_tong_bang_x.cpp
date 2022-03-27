#include <bits/stdc++.h>
using namespace std;
int n, k, j;
vector<int> v;
vector<vector<int>> res;
void init()
{
    v.clear(), res.clear();
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> j;
        v.push_back(j);
    }
    sort(v.begin(), v.end());
}
void Try(int index, int sum, vector<int> tmp)
{
    if (sum == k)
    {
        res.push_back(tmp);
        return;
    }
    if (sum > k)
        return;
    for (int i = index; i < n; i++)
    {
        if (sum + v[i] <= k)
        {
            tmp.push_back(v[i]);
            Try(i, sum + v[i], tmp);
            tmp.pop_back();
        }
    }
}
void testcase()
{
    init();
    Try(0, 0, {});
    if (res.size() == 0)
    {
        cout << "-1" << endl;
        return;
    }
    cout << res.size() << " ";
    for (int i = 0; i < res.size(); i++)
    {
        if (res[i].size() == 1)
            cout << "{" << res[i][0] << "} ";
        else
            for (int j = 0; j < res[i].size(); j++)
            {
                if (j == 0)
                    cout << "{" << res[i][j] << " ";
                else if (j == res[i].size() - 1)
                    cout << res[i][j] << "} ";
                else
                    cout << res[i][j] << " ";
            }
    }
    cout << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}