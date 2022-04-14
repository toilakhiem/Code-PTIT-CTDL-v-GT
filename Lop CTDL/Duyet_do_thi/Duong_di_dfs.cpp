#include<bits/stdc++.h>
using namespace std;
int n,m,s,e,parent[1001];
bool used[1001];
vector<int> v[1001];
1:3 
2:1 3
3:4 6
4:2 6
5:2 4
6:7 9
7:5 9
8:5 7
9:10 12
10:8 12
11:8 10 
12:11 13
13:11 14
void inp(){
	cin>>n>>m>>s>>e;
	for(int i=0;i<m;i++){
		int x,y; cin>>x>>y;
		v[x].push_back(y);
	}
	memset(used,false,sizeof(used));
	memset(parent,0,sizeof(parent));
}
void dfs(int i){
	used[i]=true;
	for(auto x:v[i]){
		if(used[x]==false){
			dfs(x);
			parent[x]=i;
		}
	}
}
int main(){
	int t; cin>>t; 
	while(t--){
		inp();
		dfs(s);
		if(used[e]==false){
			cout<<-1;
		}
		else{
			vector<int> path;
			while(s!=e){
				path.push_back(e);
				e=parent[e];
			}
			path.push_back(s);
			reverse(path.begin(),path.end());
			for(auto x:path){
				cout<<x<<" ";
			}
		}
		for(int i=1;i<=n;i++){
			v[i].clear();
		}
		cout<<endl;
	}
}