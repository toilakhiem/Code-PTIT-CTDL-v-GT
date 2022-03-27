#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n, m;
        cin >> m >> n;
        vector<long long> v(n), q(m);
        for (long long &i : q)
        {
            cin >> i;
        }
        for (long long &i : v)
        {
            cin >> i;
        }
        sort(v.begin(), v.end());
        sort(q.begin(), q.end());
        cout << q[q.size() - 1] * v[0];
        cout << endl;
    }
}