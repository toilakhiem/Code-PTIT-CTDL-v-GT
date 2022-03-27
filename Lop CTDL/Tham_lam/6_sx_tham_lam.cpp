#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		bool ok=true;
		for(int i=0;i<n;i++){
			if(b[i]!=a[i] && b[i]!=a[n-i-1]){
				ok=false;
				break;
			}
		}
		if(ok) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}