#include <bits/stdc++.h>
using namespace std;
int n, k, a[15];
bool ok = false;
vector<int> v;
vector<vector<int>> res;
void Try(int i, int sum){
    if(sum==k){
        res.push_back(v);
        return;
    }
    if(i==n && sum < k)
        return;
    for (int j = i; j < n;j++){
        if(sum + a[j] <= k ){
            v.push_back(a[j]);
            Try(j + 1, sum + a[j]);
            v.pop_back();
        }
    }
}
void testcase()
{
    res.clear();
    v.clear();
    cin >> n >> k;
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a, a + n);
    Try(0, 0);
    if(res.size()==0)
        cout << "-1";
    else{
        sort(res.begin(), res.end());
        for (int i = 0; i < res.size();i++){
            cout << "[";
            for (int j = 0; j < res[i].size() - 1; j++)
                cout << res[i][j] << " ";
            cout << res[i][res[i].size()-1] << "] ";
        }
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        testcase();
    }
}
