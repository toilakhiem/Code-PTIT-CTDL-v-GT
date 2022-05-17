#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
	return a.second>b.second;
}
vector<pair<int,int>> v;
void solve(string a){
    pair<int,int> m;
	for(int i=0;i<a.size();i++){
		if(i==0 || a[i-2]=='+'){
			string x="";
			while(a[i]>='0' && a[i]<='9'){
				x+=a[i];
				i++;
			}
			if(x.size()) m.first=stoi(x);
		}
		if(a[i-1]=='^'){
			string x="";
			while(a[i]>='0' && a[i]<='9'){
				x+=a[i];
				i++;
			}
			if(x.size()) m.second=stoi(x);
			v.push_back(m);
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		string a; getline(cin>>ws,a);
		string b; getline(cin>>ws,b);
		solve(a); solve(b);
		sort(v.begin(),v.end(),cmp);
		for(int i=0;i<v.size();i++){
			pair<int,int> x=v[i];
			while(i<v.size()-1 && x.second==v[i+1].second){
				x.first+=v[i+1].first;
				i++;
			}
			cout<<x.first<<"*x^"<<x.second;
			if(i<v.size()-1) cout<<" + ";
		}
		cout<<endl;
		v.clear();
	}
}