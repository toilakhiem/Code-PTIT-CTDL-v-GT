#include<bits/stdc++.h>
using namespace std;
int n,s,t,a[100],parent[100] = {0};
bool used[100];
vector<int> v[100];
void input(){
    cin >> n >> s >> t;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x; cin >> x; 
            if(x==1)
                v[i].push_back(j);
        }
    }
    memset(used,false,sizeof(used));
}
void dfs(int i){
    used[i] = true;
    for(auto x:v[i]){
        if(used[x] == false){
            parent[x] = i;
            dfs(x);
        }
    }
}
void bfs(int i){
    queue<int> q;
    q.push(i);
    used[i] = true;
    while(!q.empty()){
        int u = q.front();q.pop();
        for(auto x:v[u]){
            if(used[x] == false){
                q.push(u);
                parent[x] = u;
                used[u] = true;
            }
        }
    }
}
int main(){
    input();
    dfs(1);
    vector<int> path;
    int t1 = t;
    while(s!=t){
        path.push_back(t);
        t = parent[t];
    }
    path.push_back(s);
    cout << "DFS path: ";
    for(auto x:path) cout << x <<" ";
    cout << endl;
    memset(used,false,sizeof(used));
    path.clear();
    bfs(1);
    while(s!=t1){
        path.push_back(t1);
        t1 = parent[t1];
    }
    path.push_back(s);
    cout << "BFS path: ";
    for(auto x:path){
        cout << x << " ";
    }
}