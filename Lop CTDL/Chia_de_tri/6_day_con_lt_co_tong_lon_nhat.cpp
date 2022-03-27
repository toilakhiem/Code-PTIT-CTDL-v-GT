#include <bits/stdc++.h>
using namespace std;
void testcase(){
    int n;
    cin >> n;
    vector<int> v(n), res(n);
    for(int &i:v)
        cin >> i;
    res[0] = v[0];
    int ans = INT_MIN;
    for (int i = 1; i < n;i++){
        for (int j = 0; j < i;j++)
            res[i] = max(v[i], res[j] + v[i]);
        ans = max(ans, res[i]);
    }
    cout << ans << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}

