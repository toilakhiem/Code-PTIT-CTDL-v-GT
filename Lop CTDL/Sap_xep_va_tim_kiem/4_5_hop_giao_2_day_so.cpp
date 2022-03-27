#include <bits/stdc++.h>
using namespace std;
void testcase()
{
    int m, n;
    cin >> m >> n;
    bool check[100000] = {0};
    int a[100000], b[100000], c[100000], d[100000];
    int j = 0, k = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        if (check[a[i]] == true)
        {
            d[k++] = a[i];
        }
        else
        {
            check[a[i]] = true;
            c[j++] = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (check[b[i]] == true)
        {
            d[k++] = b[i];
        }
        else
        {
            check[b[i]] = true;
            c[j++] = b[i];
        }
    }
    sort(c, c + j);
    sort(d, d + k);
    for (int i = 0; i < j; i++)
        cout << c[i] << " ";
    cout << endl;
    for (int i = 0; i < k; i++)
        cout << d[i] << " ";
    cout << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}
