#include<bits/stdc++.h>
using namespace std;
int n;
using ll = long long;
ll mod = 1e9 + 7;
void testcase(){
    cin >> n;
    priority_queue<ll,vector<ll>,greater<ll>> q;
    for (int i = 0; i < n;i++){
        ll j;
        cin >> j;
        q.push(j);
    }
    long long res = 0;
    while(q.size() > 1){
        ll tmp1 = q.top();
        q.pop();
        ll tmp2 = q.top();
        q.pop();
        ll tmp = (tmp1 % mod + tmp2 % mod)%mod;
        res += tmp;
        res %= mod;
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