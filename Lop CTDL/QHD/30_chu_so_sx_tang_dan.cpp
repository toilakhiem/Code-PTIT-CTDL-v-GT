#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long dp[1001][10];
void solve(){
	for(int i=0;i<=9;i++){
		dp[1][i]=1;
	}
	for(int i=2;i<=100;i++){
		for(int j=0;j<=9;j++){
			for(int k=0;k<=j;k++){
				dp[i][j]=(dp[i][j]+dp[i-1][k])%mod;
			}
		}
	}
}
int main(){
	int t; cin>>t;
	solve();
	while(t--){
		int n; cin>>n;
		long long res=0;
		for(int i=0;i<=9;i++){
			res=(res+dp[n][i])%mod;
		}
		cout<<res<<endl;
	}
}