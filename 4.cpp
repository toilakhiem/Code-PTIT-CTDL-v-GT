//Xây dựng cây bao trùm DFS sử dụng ngăn xếp và cây bao trùm BFS sử dụng hàng đợi
#include <bits/stdc++.h>
using namespace std;
bool ok = true;
int N, S;
int mt[100][100];
bool used[1000] = {false};
vector<vector<int>> G;

void DfsTree(int s) {
    vector<pair<int, int>> tree;
    vector<bool> vs(N + 1, false);

    stack<int> st;
    st.push(s);
    vs[s] = true;

    while (!st.empty()) {
        int u = st.top();
        st.pop();
        for (int v : G[u]) {
            if (!vs[v]) {
                // cặp cạnh trong tree luôn t.m (bé, lớn)
                tree.push_back({min(u, v), max(u, v)});
                st.push(u);
                st.push(v);
                vs[v] = true;
                break;
            }
        }
    }
    cout << "Stack DFS tree\n";
    for (auto i : tree) {
        cout << i.first << " " << i.second << "\n";
    }
}

void BfsTree(int s) {
    vector<pair<int, int>> tree;
    vector<bool> vs(N + 1, false);

    queue<int> q;
    q.push(s);
    vs[s] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : G[u]) {
            if (!vs[v]) {
                tree.push_back({min(u, v), max(u, v)});
                q.push(v);
                vs[v] = true;
            }
        }
    }

    cout << "Queue BFS tree\n";
    for (auto i : tree) {
        cout << i.first << " " << i.second << "\n";
    }
}
void dfss(int u){
    used[u] = true;
    for (int i:G[u]){
        if(used[i] == false){
            dfss(i);
        }
    }
}
void kiemtra(int i){
    int dem = 0;
    for (int i = 1; i <= N;i++){
        if(!used[i]) {
            dem++;
            dfss(i);
        }
    }
    if(dem==1)
        ok = true;
    else
        ok = false;
}
int main() {
    cin >> N >> S;
    G.resize(N + 1);
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            cin >> mt[i][j];
            if (mt[i][j] == 1) {
                G[i].push_back(j);
                G[j].push_back(i);
            }
        }
    }
    kiemtra(S);
    if(ok==false) {
        cout << "No spanning tree";
        return 0;
    }
    DfsTree(S);
    BfsTree(S);
    return 0;
}