#include <bits/stdc++.h>
using namespace std;
void testcase()
{
    int n;
    cin >> n;
    bool check[100000] = {0};
    int dem = 0;
    int max = -1, min = 10000;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        check[j] = 1;
        if (max < j)
            max = j;
        if (min > j)
            min = j;
    }
    for (int i = min; i < max; i++)
    {
        if (check[i] == 0)
            dem++;
    }
    cout << dem << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        testcase();
    }
}
