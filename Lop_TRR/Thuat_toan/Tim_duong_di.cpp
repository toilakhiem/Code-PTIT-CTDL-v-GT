#include<bits/stdc++.h>
using namespace std;
class gr{
  int n,s,t,A[100][100],chuaxet[100],truoc[100];
  public:
  void inp(); void dfs(int u); void bfs(int u); 
  void init(){
      for(int i=1;i<=n;i++){
          chuaxet[i] = 1;
          truoc[i] = 0;
      }
  }
  int gets() {
      return s;
  }
  int gett(){
      return t; 
  }
  void path(int ss, int tt);
  int gettruoct (){
      return truoc[t];
  }
};
void gr::inp(){
    cin >> n >> s >> t;
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin >> A[i][j];
}
void gr::dfs(int u){
    stack<int> stk;
    chuaxet[u] = 0;
    stk.push(u);
    while(stk.size()){
        int ss = stk.top(); stk.pop();
        for(int t=1;t<=n;t++){
            if(A[ss][t] == 1 && chuaxet[t]==1){
                stk.push(ss); stk.push(t), chuaxet[t] = 0;
                truoc[t] = ss; break;
            }
        }
    }
}
void gr:: bfs(int u){
    queue<int> q;
    chuaxet[u] = 0;
    q.push(u);
    while(q.size()){
        int ss = q.front(); q.pop();
        for(int t=1;t<=n;t++){
            if(A[ss][t] == 1 && chuaxet[t] == 1) {
                q.push(t); chuaxet[t] = 0; truoc[t] = ss;
            }
        }
    }
}
void gr::path(int ss, int tt){
    if(truoc[tt] == 0) cout << "no path\n";
    else{
        cout << tt << " ";
        int u = truoc[tt];
        while(u!=ss){
            cout << u << " ";
            u = truoc[u];
        }
        cout << ss << endl;
    }
}
int main(){
    gr g;
    g.inp(); 
    g.init();
    g.dfs(g.gets());
    if(g.gettruoct() != 0){
        cout << "DFS path: ";
        g.path(g.gets(), g.gett());
        g.init(); g.bfs(g.gets());
        cout << "BFS path: ";
        g.path(g.gets(), g.gett());
    }else{
        g.path(g.gets(), g.gett());
    }
}
