#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    deque<int> dq;
    for (int i = 0; i < n; ++i)
    {
        while (!dq.empty() && a[dq.back()] <= a[i])
            dq.pop_back();
        dq.push_back(i);
        if (dq.front() < i - k + 1)
            dq.pop_front();
        if (i + 1 >= k)
            cout << a[dq.front()] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}
