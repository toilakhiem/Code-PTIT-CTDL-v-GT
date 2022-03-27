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
        vector<long long> v(m + n);
        for (int i = 0; i < m + n;i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for(int i:v)
            cout << i << " ";
        cout << endl;
    }
}