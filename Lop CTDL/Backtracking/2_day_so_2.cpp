#include<bits/stdc++.h>
using namespace std;
int n, j;
vector<int> v;
vector<vector<int>> res;
void testcase(){
    cin >> n;
    v.clear();
    res.clear();
    for (int i = 0; i < n;i++){
        cin >> j;
        v.push_back(j);
    }
    res.push_back(v);
    while(v.size() > 1){
        for (int i = 0; i < v.size();i++){
            v[i] = v[i] + v[i + 1];
        }
        v.pop_back();
        res.push_back(v);
    }
    for (int i = res.size()-1; i >= 0; i--)
    {
        cout << "[";
        for (int j = 0; j < res[i].size() - 1; j++)
            cout << res[i][j] << " ";
        cout << res[i][res[i].size() - 1] << "] ";
    }
    cout << endl;
}
int main(){
    int x;
    cin >> x;
    while(x--){
        testcase();
    }
}