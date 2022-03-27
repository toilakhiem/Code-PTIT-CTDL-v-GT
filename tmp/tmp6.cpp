#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, k, a[1001] = {0};
    cin >> n >> k;
    for (int i = 1; i <= k; ++i)
    {
        a[i] = n - k + i;
        cout << a[i] << " ";
    }
    cout << endl;
    bool ok = true;
    while(ok){
    int i = k;
    while (i >= 1 && a[i] == a[i - 1] + 1)
    {
        i--;
    }
    if (i == 0)
    {
        ok = false;
    }
    else
    {
        a[i] -= 1;
        for (int j = 1; j <= i; ++j)
        {
            cout << a[j] << " ";
        }
        for (int j = i + 1; j <= k; ++j)
        {
            a[j] = n - k + j;
            cout << n - k + j << " ";
        }
            cout << endl;
    }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        TestCase();
    }
    return 0;
}