#include <algorithm>
#include <iostream>
#define ll long long
using namespace std;
bool isTriplet(ll arr[], int n, int k)
{
    sort(arr, arr + n);
    for (int i = n - 1; i >= 2; i--)
    {
        int l = 0;
        int r = i - 1;
        while (l < r)
        {
            if (arr[l] + arr[r] == k - arr[i])
                return true;
            // nếu nhỏ hơn thì tăng l, lớn hơn thì giảm l
            (arr[l] + arr[r] < k- arr[i]) ? l++ : r--;
        }
    }

    // If we reach here, then no triplet found
    return false;
}
void testcase()
{
    int n, k;
    cin >> n >> k;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (isTriplet(a, n,k))
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}
