#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    int n;
    cin >> n;
    int a[1000];
    int min = 100000;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(a[i] + a[j]) < abs(min))
                min = a[i] + a[j];
        }
    }
    cout << min << endl;
}

int main()
{
    int x;
    cin >> x;
    while (x--)
        TestCase();
}