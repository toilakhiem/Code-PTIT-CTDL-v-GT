//Tìm chu trình Euler va đường đi Euler (nếu có) trên đồ thị vô hướng
#include <bits/stdc++.h>
using namespace std;
int n, start, edge, path[100];
bool ok;
bool isExist;
void DFS(vector<int> adj[], vector<vector<bool>> &vis, int cur, int idx){
    if (ok)return;
    path[idx] = cur;
    if (idx == edge + 1){
        ok = true;
        for (int i = 1; i <= idx; i++)
            cout << path[i] << " ";
        return;
    }
    for (auto x : adj[cur]){
        if (!vis[cur][x] && !vis[x][cur]){
            vis[cur][x] = vis[x][cur] = true;
            DFS(adj, vis, x, idx + 1);
            vis[cur][x] = vis[x][cur] = false;
        }
    }
}
int main(){
    ok = 0, edge = 0;
    isExist = 1;
    cin >> n >> start;
    vector<vector<int>> a(n + 1, vector<int>(n + 1));
    vector<int> adj[n + 1];
    vector<vector<bool>> vis(n + 1, vector<bool>(n + 1, false));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (a[i][j]){
                edge++;
                adj[i].push_back(j);
                adj[j].push_back(i);
                a[i][j] = a[j][i] = 0;
            }
        }
    }
    int odd = 0;
    for (int i = 1; i <= n; i++)
        odd += ((int)adj[i].size() & 1);
    if (odd != 0 && odd != 2){
        cout << "no Euler cycle";
        return 0;
    }
    DFS(adj, vis, start, 1);
    return 0;
}