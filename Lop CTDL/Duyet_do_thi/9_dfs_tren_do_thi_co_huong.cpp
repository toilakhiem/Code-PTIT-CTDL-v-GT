#include<bits/stdc++.h>
using namespace std;
int n, m, u;
bool used[1000];
vector<int> v[1000];
void dfs(int u){
    stack<int> stk;
    stk.push(u);
    while(stk.size()){
        int s = stk.top();
        stk.pop();
        if(!used[s]){
            cout << s << " ";
            used[s] = 1;
        }
        for (int i = v[s].size()-1; i >= 0;i--){
            if(!used[v[s][i]]) stk.push(v[s][i]);
        }
    }
}
void testcase(){
    cin >> m >> n >> u;
    for (int i = 0; i < n;i++){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
    }
    memset(used, false, sizeof(used));
    dfs(u);
    cout << endl;
    for (int i = 1; i <= m;i++)
        v[i].clear();
}
int main(){
    int x;
    cin >> x;
    while(x--)
        testcase();
}