#include<bits/stdc++.h>
using namespace std;
int m, n, u;
bool used[1001];
vector<int> v[1001];
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