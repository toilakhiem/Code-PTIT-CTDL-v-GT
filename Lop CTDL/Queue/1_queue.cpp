#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		queue<int> q;
		while (n--) {
			int a; cin >> a;
			if (a == 1)cout << q.size() << endl;
			if (a == 2) {
				if (q.empty())cout << "YES\n";
				else cout << "NO\n";
			}
			if (a == 3) {
				int b; cin >> b; q.push(b);
			}
			if (a == 4) {
				if (!q.empty()) q.pop();
			}
			if (a == 5) {
				if (q.empty()) cout << -1 << endl;
				else cout << q.front() << endl;
			}
			if (a == 6) {
				if (q.empty()) cout << -1 << endl;
				else cout << q.back() << endl;
			}
		}
	}
}