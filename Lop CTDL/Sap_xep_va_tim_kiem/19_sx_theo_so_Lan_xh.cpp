#include <bits/stdc++.h>
using namespace std;
int xuathien(int b[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (b[i] == x)
            return i;
    return -1;
}
void testcase()
{
    int n;
    cin >> n;
    int j = 0;
    int a[10000];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int b[10000], dem[10000];
    for (int i = 0; i < n; i++)
    {
        int k = xuathien(b, j, a[i]);
        if (k == -1)
        {
            b[j] = a[i];
            dem[j] = 1;
            j++;
        }
        else
            dem[k]++;
    }
    for (int i = 0; i < j; i++)
    {
        for (int k = i + 1; k < j; k++)
        {
            if (dem[i] < dem[k])
            {
                swap(dem[i], dem[k]);
                swap(b[i], b[k]);
            }
            else if (dem[i] == dem[k] && b[i] > b[k])
            {
                swap(b[i], b[k]);
                swap(dem[i], dem[k]);
            }
        }
    }
    for (int i = 0; i < j; i++)
    {
        for (int k = 1; k <= dem[i]; k++)
        {
            cout << b[i] << " ";
        }
    }
    cout << endl;
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
