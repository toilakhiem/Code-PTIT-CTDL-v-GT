#include<bits/stdc++.h>
using namespace std;
string ketqua(string s){
    string res;
    stack<string> stk;
    for (int i = 0; i < s.size();i++){
        if(isalpha(s[i]))
            stk.push(string(1, s[i]));
        else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            string x1 = stk.top();
            stk.pop();
            string x2 = stk.top();
            stk.pop();
            string tmp = '(' + x2 + s[i] + x1 + ')';
            stk.push(tmp);
        }
    }
    return stk.top();
}
void testcase(){
    string s;
    cin >> s;
    cout << ketqua(s) << endl;
}
int main(){
    int x;
    cin >> x;
    while(x--)
        testcase();
}