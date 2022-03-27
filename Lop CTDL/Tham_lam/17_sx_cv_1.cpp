#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
	return a.second<b.second;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
        int a[10000], b[10000];
        vector<pair<int,int>> v;
		for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        for (int i = 0; i < n;i++){
            v.push_back({a[i], b[i]});
        }
        sort(v.begin(), v.end(), cmp);
        int x=v[0].second,dem=1;
		for(int i=1;i<v.size();i++){
			if(v[i].first >= x){
				dem++;
				x=v[i].second;
			}
		}
		cout<<dem<<endl;
	}
}