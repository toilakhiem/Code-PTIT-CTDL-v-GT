#include<bits/stdc++.h>
using namespace std;
int m, n, u;
bool used[1001];
vector<int> v[1001];
// đệ quy
// void dfs(int i){
//     cout << i << " ";
//     used[i] = 1;
//     for(auto x:v[i]){
//         if(!used[x])
//             dfs(x);
//     }
// }

// stack

void bfs(int u){
	queue<int> q;
	q.push(u);
	used[u] = 1;
	while(q.size()){
		int s = q.front();
		q.pop();
		cout << s << " ";
		for(auto i : v[s]){
			if(!used[i]){
				used[i] = 1;
				q.push(i);
			}
		}
	}
}

void testcase(){
    cin >> m >> n >> u;
    for (int i = 1; i <= n;i++){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    memset(used, false, sizeof(used));
    bfs(u);
    for(int i=1;i<=m;i++){
			v[i].clear();
		}
    cout << endl;
}
int main(){
	int t; cin>>t; 
	while(t--){
        testcase();
    }
}