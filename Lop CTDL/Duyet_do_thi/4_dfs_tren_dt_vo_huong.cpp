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
        for (int i = v[s].size() - 1; i >= 0;i--)
        {
            if(!used[v[s][i]]){
                stk.push(v[s][i]);
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
    dfs(u);
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