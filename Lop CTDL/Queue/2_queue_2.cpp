#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	queue<int>q;
	while (t--) {
		string s;
		cin >> s;
		if (s == "PUSH") {
			int x;
			cin >> x;
			q.push(x);
		}
		if (s == "POP" && q.size() > 0) {
			q.pop();
		}
		if (s == "PRINTFRONT") {
			if (q.size() == 0) cout << "NONE" << endl;
			else cout << q.front() << endl;
		}
	}
}