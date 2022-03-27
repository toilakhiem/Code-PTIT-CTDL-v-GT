// #include<bits/stdc++.h>
// using namespace std;
// int n, k;
// void testcase(){
//     cin >> n >> k;
//     vector<int> a(n);
//     for(int&i :a)
//         cin >> i;
//     // sx
//     sort(a.begin(), a.end());
//     long long res = 0;
//     for (int i = 0; i < n; ++i)
//     {
//         int p = upper_bound(a.begin() + i + 1, a.end(), a[i] + k - 1) - (a.begin() + i + 1);
//         res += p;
//     }
//     cout << res << endl;
// }
// int main(){
//     int x;
//     cin >> x;
//     while (x--)
//     {
//         testcase();
//     }
    
// }
#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    long long res = 0;
    int j = 1;
    for (int i = 0; i < n - 1; i++)
    {
        while (a[j] - a[i] < k && j < n)
        {
            j++;
        }
        res += (long long)j - i - 1;
    }
    cout << res << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        TestCase();
    }
    return 0;
}