//Tìm chu trình Hamilton và đường đi Hamilton (nếu có) trên đồ thị vô hướng

#include<bits/stdc++.h>
using namespace std;
int n,a;
vector<int> v[1001];
bool used[1001];
vector<string> kq;
void inp(){
    cin>>n>>a;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x; cin>>x;
            if(x==1){
                v[i].push_back(j);
            }
        }
    }
}
bool check(vector<int> path,int u){
    for(int i=0;i<path.size();i++){
        if(path[i]==u){
            return false;
        }
    }
    return true;
}
void inkq(vector<int> path){
    set<int> s;
    for(int i=0;i<path.size();i++){
        s.insert(path[i]);
    }
    string res="";
    if(s.size()==path.size() && s.size()==n){
        res+=to_string(a)+" ";
        for(auto x:path){
        	if(x==10) {
        		string m="A";
        		res+=m+" ";
			}
            else res+=to_string(x)+" ";
        }
        kq.push_back(res);
    }
}
void inkq2(vector<int> path){
	set<int> s;
	s.insert(1);
    for(int i=0;i<path.size();i++){
        s.insert(path[i]);
    }
    string res="";
    if(s.size()==n){
        res+=to_string(a)+" ";
        for(auto x:path){
        	if(x==10) {
        		string m="A";
        		res+=m+" ";
			}
            else res+=to_string(x)+" ";
        }
        kq.push_back(res);
    }
}
void bfs(int i){
    queue<vector<int>> q;
    for(auto x:v[i]){
        vector<int> u;
        u.push_back(x);
        q.push(u);
    }
    while(!q.empty()){
        vector<int> path=q.front(); q.pop();
        int last=*path.rbegin();
        if(last==a){
            if(path.size()>=n) inkq(path);
        }
        int k=1;
        if(path.size()==n-1){
        	for(auto x:v[last]){
        		if(x==1) k=0;
			}
			if(k) inkq2(path);
		}
        for(auto x:v[last]){
            if(check(path,x)){
                vector<int> new_path(path);
                new_path.push_back(x);
                q.push(new_path);
            }
        }
    }
}
int main(){
    inp();
    bfs(a);
    if(kq.size()==0){
    	cout<<"No Hamiltonian path"<<endl;
    	return 0;
	}
    sort(kq.begin(),kq.end());
    for(auto x:kq){
    	for(int i=0;i<x.length();i++){
    		if(x[i]!=' '){
    			if(x[i]=='A') cout<<10<<" ";
    			else cout<<x[i]<<" ";
			}
		}
		cout<<endl;
	}
}