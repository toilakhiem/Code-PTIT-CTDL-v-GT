#include<bits/stdc++.h>
using namespace std;
void testcase(){
    int n;
    string s;
    cin >> n >> s;
    map<char, int> m;
    for(auto i:s){
        m[i]++;
    }
    priority_queue<int> q;
    for(auto i:m){
        q.push(i.second);
    }
    while(n--){
        int x = q.top();
        q.pop();
        x--;
        q.push(x);
    }
    int sum = 0;
    while(q.size()){
        int x = q.top();
        q.pop();
        sum += x * x;
    }
    cout << sum << endl;
}
int main(){
    int x;
    cin >> x;
    while(x--)
        testcase();
}