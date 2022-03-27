#include<bits/stdc++.h>
using namespace std;
int n;
void testcase(){
    cin >> n;
    priority_queue<int,vector<int>,greater<int>> q;
    for (int i = 0; i < n;i++){
        int j;
        cin >> j;
        q.push(j);
    }
    long long res = 0;
    while(q.size() > 1){
        int tmp1 = q.top();
        q.pop();
        int tmp2 = q.top();
        q.pop();
        int tmp = tmp1 + tmp2;
        res += tmp;
        q.push(tmp);
    }
    cout << res << endl;
}
int main(){
    int x;
    cin >> x;
    while(x--)
        testcase();
}