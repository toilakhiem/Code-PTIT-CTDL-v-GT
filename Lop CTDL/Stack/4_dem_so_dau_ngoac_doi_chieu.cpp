
#include <bits/stdc++.h>
using namespace std;
int res(string expr)
{
	int len = expr.length();
	stack<char> stk;
	for (int i = 0; i < len; i++) {
		if (expr[i] == ')' && !stk.empty()) {
			if (stk.top() == '(')
				stk.pop();
			else
				stk.push(expr[i]);
		}
		else
			stk.push(expr[i]);
	}

	int red_len = stk.size();
	int n = 0;
	while (!stk.empty() && stk.top() == '(') {
		stk.pop();
		n++;
	}
	return (red_len / 2 + n % 2);
}
int main()
{
    int x;
    cin >> x;
    while(x--){
        string s;
        cin >> s;
        cout << res(s) << endl;
    }
}
