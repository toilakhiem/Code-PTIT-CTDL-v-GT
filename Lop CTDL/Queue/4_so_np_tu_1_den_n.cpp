#include<bits/stdc++.h>
using namespace std;
vector<string> v;
void testcase(){
    int n;
    cin >> n;
    queue<string> q;
    q.push("1");
    while(n--){
        string x = q.front();
        q.pop();
        cout << x << " ";
        q.push(x + '0');
        q.push(x + '1');
    }
    cout << endl;
}
int main(){
	int t; cin>>t;
	while(t--){
        testcase();
    }
}