//Xây dựng cây bao trùm bé nhất theo thuật toán Prim
#include<bits/stdc++.h>
using namespace std;
int a[100][100], n, u, ne, dH, s[100], chuaxet[100], truoc[100];

struct canh{
    int h, x1, x2;
};
canh gr[100];
void init(){
    cin>>n>>u;
    ne=0;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)  
            cin>>a[i][j];
}
void prim(int u){
    memset(chuaxet,1,sizeof(chuaxet));
    chuaxet[u]=0;
    int dem=0, top=1;
    s[top]=u;
    int vt, n1=0, n2=0;
    dH=0;
    while(dem<n-1){
        int min=1000;
        for(int i=1; i<=top; i++){
            vt=s[i];
            for(int j=1; j<=n; j++){
                if(chuaxet[j] && a[vt][j]<min && a[vt][j]){
                    min=a[vt][j];
                    n1=vt;
                    n2=j;
                }
                }
            }
            dH+=min; dem++; ne++;
            gr[ne].x1=n1; gr[ne].x2=n2;
            s[++top]=n2;
            chuaxet[n2]=0;
            sort(s+1, s+top+1);
        }
    }
    void bfs(int u){
        queue<int> q;
        q.push(u); chuaxet[u]=0;
        while(!q.empty()){
            int ss=q.front(); q.pop();
            for(int i=1; i<=n; i++)
                if(a[ss][i] && chuaxet[i]){
                    chuaxet[i]=0;
                    q.push(i);
                    truoc[i]=u;
                }
        }
    }
    int ktra(){
        memset(chuaxet,1,sizeof(chuaxet));
        for(int i=1; i<n; i++){
            truoc[100]={0};
            bfs(i);
            for(int j=i+1; j<=n; j++)
                if(truoc[j]==0) return 0;
    }
    return 1;
}
int main(){
    init();
    if(ktra()){
        prim(u);
        cout<<"dH = "<<dH<<endl;
        for(int i=1; i<=ne; i++){
            if(gr[i].x1<gr[i].x2)
                cout<<gr[i].x1<<" "<<gr[i].x2<<endl;
            else cout<<gr[i].x2<<" "<<gr[i].x1<<endl;
        }
    }
    else cout<<"No spanning tree";
}