#include <bits/stdc++.h>
using namespace std;
void testcase(){
    int m;
    cin >> m;
    vector<int> v(m);
    for(int &i:v)
        cin >> i;
    sort(v.begin(), v.end());
    int res = INT_MIN, n = v.size();
    int x1 = v[n - 1] * v[n - 2];
    int x2 = v[n - 1] * v[n - 2] * v[n - 3];
    int x3 = v[0] * v[1] * v[n - 1];
    int x4 = v[1] * v[2];
    int x5 = v[1] * v[2] * v[3];
    res = max(x1, max(x2,x3));
    res = max(res, max(x3, x4));
    res = max(res, x5);
    cout << res;
}
int main()
{
    int x = 1;
    while (x--)
        testcase();
}

