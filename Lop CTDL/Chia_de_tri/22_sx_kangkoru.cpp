#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++){
			int x; cin>>x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<=n/2;i++){
			auto x=lower_bound(v.begin()+n/2,v.end(),2*v[i]); // chia kanguru ra lam 2 nhom
			if(*x>=2*v[i]){
				v.erase(x);
			}
		}
		cout<<v.size()<<endl;
	}
}