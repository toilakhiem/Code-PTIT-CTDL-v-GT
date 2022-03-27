#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int k; cin>>k;
		string a,b; cin>>a>>b;
		if(a.length()<b.length()) swap(a,b);
		while(a.length()>b.length()){
			b="0"+b;
		}
		vector<int> v;
		int du=0;
		for(int i=a.length()-1;i>=0;i--){
			int tong=a[i]-'0'+b[i]-'0'+du;
			du=tong/k;
			tong=tong%k;
			v.push_back(tong);
		}
		if(du>0) v.push_back(du);
		reverse(v.begin(),v.end());
		for(auto x:v){
			cout<<x;
		}
		cout<<endl;
	}
}