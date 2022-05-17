#include <bits/stdc++.h>
using namespace std;
int n, m;
int k;
bool used[10000];
vector<int> v[1001];
void inp(){
    cin >> n >> m >> k;
    for (int i = 0; i < m;i++){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
}
void dfs(int i){
    used[i] = 1;
    for(auto x:v[i]){
        if(used[x] == 0 )
            dfs(x);
    }
}
int main()
{
        inp();
        memset(used, false, sizeof(used));
        used[k] = true;
        dfs(k);
    int dem = 0;
    for (int i = 1; i <= n;i++){
        if(!used[i]){
            cout << i <<endl;
            dem++;
        }
    }
    if(dem==0)
        cout << "0";
}