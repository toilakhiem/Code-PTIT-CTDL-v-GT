#include<bits/stdc++.h>
using namespace std;
// 1 10 11 100 101 110 111 100
void testcase(){
    long long n;
    cin >> n;
    queue<long long> q;
    q.push(1);
    int dem = 0;
    while(1){
        long long tmp = q.front();
        q.pop();
        if(tmp%n==0){
            cout << tmp << endl;
            break;
        }
        q.push(tmp * 10);
        q.push(tmp * 10 + 1);
    }
}
int main(){
	int t; cin>>t;
	while(t--){
        testcase();
    }
}