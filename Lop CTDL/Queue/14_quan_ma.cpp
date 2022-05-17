#include<bits/stdc++.h>
using namespace std;
int n,m,s1,s2,e1,e2;
string a,b;
int d[50][50]={0};
int dx[8]={-2,-2,-1,1,2,2,1,-1};
int dy[8]={-1,1,2,2,1,-1,-2,-2};
void inp(){
	cin>>a>>b;
	s1=a[0]-'a'+1; s2=a[1]-'0';
	e1=b[0]-'a'+1; e2=b[1]-'0';
	memset(d,0,sizeof(d));
}
void bfs(int i,int j){
	queue<pair<int,int>> q;
	q.push({i,j});
	while(!q.empty()){
		pair<int,int> x=q.front(); q.pop();
		int fi=x.first;
		int se=x.second;
        if(fi == e1 && se == e2) {
            cout << d[fi][se] << endl;
            return;
        }
		for(int k=0;k<8;k++){
			int i1=fi+dx[k];
			int j1=se+dy[k];
			if(i1>=1 && i1<=8 && j1>=1 && j1<=8){
				q.push({i1,j1});
				d[i1][j1]=d[fi][se]+1;
			}
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		if(a==b) cout<<0<<endl;
		else bfs(s1,s2);
	}
}