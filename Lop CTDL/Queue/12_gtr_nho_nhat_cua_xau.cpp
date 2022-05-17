#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void ketqua(int n, string s)
{
    ll res = 0;
    map<char, ll> mp;
    priority_queue<ll> q;
    for (int i = 0; i < s.size();i++){
        mp[s[i]]++;
    }
    for(auto i:mp){
        q.push(i.second);
    }
    while(n--){
        int x = q.top();
        q.pop();
        x--;
        if(x>0)
            q.push(x);
    }
    while(q.size()){
        res += q.top() * q.top();
        q.pop();
    }
    cout << res << endl;
}
void testcase(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    ketqua(n, s);
}
int main(){
    int x;
    cin >> x;
    while(x--)
        testcase();
}