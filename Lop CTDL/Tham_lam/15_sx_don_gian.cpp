#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		v.push_back({x,i});
	}
	sort(v.begin(),v.end());
	int res=1,ans=1,c=v[0].second;
	for(int i=1;i<n;i++){
		if(v[i].second>c){
			ans++; 
			res=max(ans,res);
		}
		else ans=1;
		c=v[i].second;
	}
	cout<<n-res<<endl;
}