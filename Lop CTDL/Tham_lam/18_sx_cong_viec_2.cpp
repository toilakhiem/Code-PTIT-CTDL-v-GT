#include<bits/stdc++.h>
using namespace std;
struct work{
	int a,b,w;
};
bool cmp(work a,work b){
	return a.w>b.w;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		work a[n];
		for(int i=0;i<n;i++){
			cin>>a[i].a>>a[i].b>>a[i].w;
		}
		sort(a,a+n,cmp);
		int check[1005]={0};
		vector<int> v;
		for(int i=0;i<n;i++){
			for(int j=min(n,a[i].b);j>=1;j--){
				if(check[j]==0){
					v.push_back(a[i].w);
					check[j]=1;
					break;
				}
			}
		}
		
		long long res=0;
		for(auto x:v){
			res+=x;
		}
		cout<<v.size()<<" "<<res<<endl;
	}
}