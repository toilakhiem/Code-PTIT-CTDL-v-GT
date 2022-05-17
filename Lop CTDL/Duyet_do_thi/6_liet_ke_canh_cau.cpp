#include<bits/stdc++.h>
using namespace std;
int n,m;
bool used[1001];
vector<pair<int,int>> edge;
vector<int> v[1001];
void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y; cin>>x>>y;
		edge.push_back({x,y});
		v[x].push_back(y);
		v[y].push_back(x);
	}
}
void dfs(int i,int s,int e){
	used[i]=true;
	for(auto x:v[i]){
		if((i==s && x==e) || (i==e && x==s)){
			continue;
		}
		if(used[x]==false){
			dfs(x,s,e);
		}
	}
}
void testcase(){
	inp();
	for (int i = 0; i < m;i++){
		memset(used, false, sizeof(used));
		dfs(1, edge[i].first, edge[i].second);
		bool ok=false;
		for(int i=1;i<=n;i++){
			if(used[i]==false){
				ok=true;
			}
		}
		if(ok){
			cout<<edge[i].first<<" "<<edge[i].second<<" ";
		}
	}
	cout<<endl;
		for(int i=1;i<=n;i++){
			v[i].clear();
		}
		edge.clear();
}
int main(){
	int t; cin>>t;
	while(t--)
		testcase();
}