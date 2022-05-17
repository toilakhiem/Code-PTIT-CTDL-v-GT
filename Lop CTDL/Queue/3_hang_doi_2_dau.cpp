#include<bits/stdc++.h>
using namespace std;
deque<int> q;
int main(){
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		if (s == "PUSHFRONT"){
			int x; cin >> x;
			q.push_front(x);
		}
		if (s == "PRINTFRONT"){
			if (q.size() == 0) cout << "NONE\n";
			else cout << q.front() << endl;
		}
		if (s == "POPFRONT" && !q.empty())  q.pop_front();
		if (s == "PUSHBACK"){
			int x; cin >> x;
			q.push_back(x);
		}
		if (s == "PRINTBACK"){
			if (q.size() == 0)  cout << "NONE\n";
			else cout << q.back() << endl;
		}
		if (s == "POPBACK" && !q.empty())  q.pop_back();
	}
}