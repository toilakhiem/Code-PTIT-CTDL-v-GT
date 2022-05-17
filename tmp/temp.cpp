#include <bits/stdc++.h>
using namespace std;
int n, a[1000];
vector<int> v;
vector<vector<int>> res;
void Try(int u){
    v.push_back(a[u]);
    if(v.size() >=2 )
        res.push_back(v);
    for (int i = u + 1; i < n;i++){
        if(a[i] > a[u]){
            Try(i);
            
        }
    }
    v.pop_back();
}
int main()
{
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> a[i];
    for (int i = 0; i < n - 1;i++)
        Try(i);
    sort(res.begin(), res.end());
    for (auto i : res)
        {
            for (auto j : i)
                cout << j << " ";
            cout << endl;
        }
}

