#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll ketqua(vector<int> v, int n){
	stack<ll> stk;
	int i = 0;
	ll res = 0;
	while(i<n){
		if(stk.empty() || v[stk.top()] <= v[i])
			stk.push(i++);
		else{
			ll x = stk.top();
			stk.pop();
			ll tmp = v[x] * ((stk.empty()) ? i : i - stk.top() - 1);
			res = max(res, tmp);
		}
	}
	while(stk.size()){
		ll x = stk.top();
		stk.pop();
		ll tmp = v[x] * ((stk.empty()) ? i : i - stk.top() - 1);
		res = max(res, tmp);
	}
	return res;
}
void testcase(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int &i:v)
		cin >> i;
	// giai quyet
	// neu lon hon top hoac stk rong thi push, neu khong thi maxarea = (stk.empty ? i : i-top-1)
	// lam tuong tu den khi i=n 
	// lam tuong tu khi stk tong
	cout << ketqua(v, n) << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}