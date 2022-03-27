#include <bits/stdc++.h>
using namespace std;
void testcase()
{
    int n, res;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
        if(v[i] == 1){
            res = i;
        }
    }
    cout << res << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        testcase();
    }
}