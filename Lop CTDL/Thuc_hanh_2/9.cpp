    #include <bits/stdc++.h>
    using namespace std;
    int n, m;
    bool used[10000];
    vector<int> v[10000];
    vector<pair<int, int>> ed;
    void inp(){
        cin >> n >> m;
        for (int i = 0; i < m;i++){
            int x, y;
            cin >> x >> y;
            ed.push_back({x, y});
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
    void dfs2(int i, int s, int e){
        used[i] = true;
        for(auto x:v[i]){
            if((i==s && x==e) || (i==e && x==s) ) continue;
            if(used[x] == false)
                dfs2(x, s, e);
        }
    }
    int main()
    {
        int dem1 = 0, dem2 = 0;
        inp();
        for (int i = 1; i <= n;i++){
            memset(used, false, sizeof(used));
            used[i] = true;
            if(i==1)
                dfs(2);
            else
                dfs(1);
            bool ok = false;
            for (int j = 1; j <= n;j++){
                if(used[j] == 0){
                    ok = 1;
                    break;
                }
            }
            if(ok)
                dem1++;
        }
        for (int i = 0; i < m;i++){
            memset(used, false, sizeof(used));
            dfs2(1,ed[i].first,ed[i].second);
            bool ok = false;
            for (int j = 1; j <= n;j++){
                if(used[j] == false){
                    ok = true;
                    break;
                }
            }
            if(ok)
                dem2++;
        }
        cout << dem1 << " " << dem2 << endl;
    }