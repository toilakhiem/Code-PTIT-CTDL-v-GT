#include <bits/stdc++.h>
using namespace std;
int n,m;
bool used[1001];
vector<int> v[1001];
void dfs(int u){
    used[u] = true;
    for (int i:v[u]){
        if(used[i] == false){
            dfs(i);
        }
    }
}
void input(){
    cin >> m >> n;
    for (int i = 0; i < n;i++){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    memset(used,false,sizeof(used));
}
void testcase(){
    input();
    int dem = 0;
    for (int i = 1; i <= m;i++){
        if(!used[i]) {
            dem++;
            dfs(i);
        }
    }
    cout << dem << endl;
    for(int i=1;i<=m;i++){
			v[i].clear();
	}
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}