#include<bits/stdc++.h>
using namespace std;
// 1 10 11 100 101 110 111 100
void testcase(){
    long long n, gioihan = 1, dem = 0;
    cin >> n;
    queue<string> q;
    stack<string> stk;
    q.push("6");
    q.push("8");
    while(1){
        string tmp = q.front();
        q.pop();
        if(tmp.size() > n ) break;
        stk.push(tmp);
        dem++;
        q.push(tmp + '6');
        q.push(tmp + '8');
    }
    cout << dem << endl;
    while(stk.size()){
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;
}
int main(){
	int t; cin>>t;
	while(t--){
        testcase();
    }
}