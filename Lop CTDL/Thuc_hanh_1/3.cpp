#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long n,k;
struct mt{
	long long pos[15][15]={0};
};
mt nhan(mt a,mt b){
	mt res;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			res.pos[i][j]=0;
			for(int k=0;k<n;k++){
				res.pos[i][j]=(res.pos[i][j]+(a.pos[i][k]*b.pos[k][j]%mod))%mod;
			}
		}
	}
	return res;
}
mt power(mt a, long long k){
	if(k==1) return a;
	mt x=power(a,k/2);
	if(k%2==0) return nhan(x,x);
	else return nhan(a,nhan(x,x));
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		mt a;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a.pos[i][j];
			}
		}
		mt res=power(a,k);
		long long kq=0;
		for(int i=0;i<n;i++){
			kq=(kq+res.pos[0][i])%mod;
		}
		cout<<kq<<endl;
	}
}