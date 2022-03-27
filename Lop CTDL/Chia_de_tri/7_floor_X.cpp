#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll tim(vector<long long> v, long long n, long long x)
{
    int res = -1;
    if (v[0] > x)
        return -1;
    long long l = 0, h = n - 1;
    while (l <= h)
    {
        long long mid = l + (h - l) / 2;
        if (v[mid] == x)
            return mid+1;
        else if (v[mid] > x)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
            res = mid;
        }
    }
    return res + 1;
}
void testcase(){
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll &i:v)
        cin >> i;
    cout << tim(v,n, k) << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x;
    cin >> x;
    while (x--)
        testcase();
}

