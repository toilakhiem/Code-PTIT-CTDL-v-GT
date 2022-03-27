#include	<bits/stdc++.h>
using namespace std;

int M = 1e9+7;
int n, x;
struct Matran {
	long long f[10][10];
};
Matran operator* (Matran A, Matran B) {
	Matran c; int i , j, k;
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			c.f[i][j] = 0;
			for(k = 0; k < n; k++) {
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
    int t; cin >> t;
	while(t--) {
		cin >> n >> x;
		Matran a;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cin >> a.f[i][j];
			}
		}
		Matran kq = powMod(a, x);
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cout << kq.f[i][j] << " ";
			}
			cout << endl;
		}
	}
}