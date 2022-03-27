// #include<bits/stdc++.h>
// using namespace std;
// long long mod=1e9+7;
// struct mt{
// 	long long pos[15][15]={0};
// };
// mt nhan(mt a,mt b){
// 	mt res;
// 	for(int i=0;i<2;i++){
// 		for(int j=0;j<2;j++){
// 			res.pos[i][j]=0;
// 			for(int k=0;k<2;k++){
// 				res.pos[i][j]=(res.pos[i][j]+(a.pos[i][k]*b.pos[k][j]%mod))%mod;
// 			}
// 		}
// 	}
// 	return res;
// }
// mt power(mt a, long long k){
// 	if(k==1) return a;
// 	mt x=power(a,k/2);
// 	if(k%2==0) return nhan(x,x);
// 	else return nhan(a,nhan(x,x));
// }
// int main(){
// 	int t; cin>>t;
// 	while(t--){
// 		long long k; cin>>k;
// 		mt a;
// 		for(int i=0;i<2;i++){
// 			for(int j=0;j<2;j++){
// 				if(i!=1 || j!=1){
// 					a.pos[i][j]=1;
// 				}
// 			}
// 		}
// 		mt res=power(a,k);
// 		cout<<res.pos[0][1]<<endl;
// 	}
// }
#include	<bits/stdc++.h>
using namespace std;

int M = 1e9+7;
struct Matran {
	long long f[2][2];
};
Matran operator* (Matran A, Matran B) {
	Matran c; int i , j, k;
	for(i = 0; i <= 1; i++) {
		for(j = 0; j <= 1; j++) {
			c.f[i][j] = 0;
			for(k = 0; k <= 1; k++) {
				c.f[i][j] = (c.f[i][j] + A.f[i][k]*B.f[k][j] % M) %M;
			}
		}
	}
	return c;
}
Matran powMod(Matran A, int n) {
	if(n == 1) return A;
	Matran x = powMod(A, n/2);
	if(n % 2 == 0) return x*x;
	return A*x*x;
}
int main() {
        ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		Matran a;
		a.f[0][0] = 1;
		a.f[0][1] = 1;
		a.f[1][0] = 1;
		a.f[1][1] = 0;
		Matran kq = powMod(a, n);
		cout << kq.f[1][0] << endl;
	}
}