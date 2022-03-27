#include	<bits/stdc++.h>
using namespace std;

int m = 1e9+7;
long long powMod(int a, long long b) {
	if(b == 0) return 1;
	long long x = powMod(a, b/2);
	if(b % 2 == 0) return x*x%m;
	return a*(x*x%m)%m;
}
int main() {
        ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int a;
	long long b;
	while(1) {
		cin >> a >> b;
		if(a == 0 && b == 0) {
			break;
		}
		cout << powMod(a, b) << endl;
	}
}