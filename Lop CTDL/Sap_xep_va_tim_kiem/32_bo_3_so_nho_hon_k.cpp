#include <algorithm>
#include <iostream>
#define ll long long
using namespace std;
ll isTriplet(ll arr[], int n, int k)
{
    sort(arr, arr + n);
    ll res = 0;
    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            if (arr[l] + arr[r] + arr[i] >= k){
                r--;
            }
            else{
                res += r - l;
                l++;
            }
        }
    }

    return res;
}
void testcase()
{
    int n, k;
    cin >> n >> k;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << isTriplet(a, n, k) << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}
