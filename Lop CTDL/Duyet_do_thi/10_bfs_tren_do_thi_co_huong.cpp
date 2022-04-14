#include<bits/stdc++.h>
using namespace std;
int n, m, u;
bool used[1000];
vector<int> v[1000];
void bfs(int u){
    queue<int> q;
    q.push(u);
    used[u] = 1;
    while(q.size()){
        int s = q.front();
        cout << s << " ";
        q.pop();
        for(int i:v[s]){
            if(!used[i]){
                used[i] = 1;
                q.push(i);
            }
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
    bfs(u);
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