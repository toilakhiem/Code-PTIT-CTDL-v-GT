#include<bits/stdc++.h>
using namespace std;
void ketqua(string s){
    int cnt = 1;
    stack<int> stk;
    stk.push(1);
    for (int i = 0; i < s.size();i++){
        if(s[i] == 'I') {
            while(stk.size()){
                cout << stk.top();
                stk.pop();
            }
            cnt++;
            stk.push(cnt);
        }else{
            cnt++;
            stk.push(cnt);
        }
    }
    while(stk.size()){
        cout << stk.top();
        stk.pop();
    }
}
void testcase(){
    string s;
    cin >> s;
    ketqua(s);
    cout << endl;
}
int main(){
    int x;
    cin >> x;
    while(x--)
        testcase();
}