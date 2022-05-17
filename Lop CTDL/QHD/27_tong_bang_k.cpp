#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		int a[n+5],d[k+100]={0};
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		d[0]=1;
		for(int i=1;i<=k;i++){
			for(int j=1;j<=n;j++){
				if(i>=a[j]) {
				    d[i]=(d[i]+d[i-a[j]])%mod;
				}
			}
		}
		cout<<d[k]<<endl;
	}
}
// 1 2 3 4 5 6 7 
// 1 5 6
// d1 = 1
// d2 = 1
// d3 = 1
// d4 = 0 + d[4-1] = d[3] = 1
// d[5] = d[5-1] + d[5-5] = 2
// d[6] = d[6-1] + d[6-5] + d[6-6] = 2 + 1 + 1 = 4
// d[7] = d[7-1] + d[7-5] + d[7-6] = 4 + 1 + 1
