#include <bits/stdc++.h>
using namespace std;
// x^y > y^x; khi y>x
int cnt[5];
int solve(int b[], int m, int x)
{
    if (x == 0)
        return 0;
    if (x == 1)
        return cnt[0]; // vi 1^0 > 0^1
    long long res = cnt[0] + cnt[1];
    auto it = upper_bound(b, b + m, x);
    res += m - (it - b); // tat ca phan tu lon hon x trong mang b deu thoa man
    if (x == 2)
    {
        res -= (cnt[4] + cnt[3]); // loai 3 va 4 vi 2^4=4^2 và 2^3 < 3^2
    }
    if (x == 3)
    {
        res += cnt[2]; // ta chua duyet den gia tri nay(3^2 > 2^3)
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            if (b[i] <= 4)
            {
                cnt[b[i]]++;
            }
        }
        sort(b, b + m);
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += solve(b, m, a[i]);
        }
        cout << ans << endl;
        memset(cnt, 0, sizeof(cnt));
    }
}
