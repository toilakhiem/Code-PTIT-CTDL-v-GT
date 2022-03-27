#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        unordered_map<int, int> m;
        for (int &i:v) {
            cin >> i;
            m[i]++;
        }
        bool check = false;
        for (int i = 0; i < n;i++){
            if(m[v[i]] > 1){
                cout << v[i] << endl;
                check = true;
                break;
            }
        }
        if(!check)
            cout << "NO" << endl;
    }
}
