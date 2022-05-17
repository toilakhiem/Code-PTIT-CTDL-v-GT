#include<bits/stdc++.h>
using namespace std;
struct pos{
	int x,y,w;
};
int n,m,a[1005][1005];
bool ok;
bool used[1001][1001];
void inp(){
	cin>>n>>m; ok=true;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	memset(used,false,sizeof(used));
}
void hangdoi(){
	queue<pos> q;
	q.push({1,1,0});
	used[1][1]=true;
	while(!q.empty()){
		pos u=q.front(); q.pop();
		int i=u.x+a[u.x][u.y];
		int j=u.y+a[u.x][u.y];
		if((i==n && u.y==m) || (u.x==n && j==m)){
			cout<<u.w+1<<endl;
			ok=false;
			return;
		}
		if(i<=n && used[i][u.y]==false){
			q.push({i,u.y,u.w+1});
			used[i][u.y]=true;
		}
		if(j<=m && used[u.x][j]==false){
			q.push({u.x,j,u.w+1});
			used[u.x][j]=true;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		hangdoi();
		if(ok) cout<<-1<<endl;
	}
}