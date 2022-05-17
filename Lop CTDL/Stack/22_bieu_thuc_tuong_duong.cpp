#include<bits/stdc++.h>
using namespace std;
string ketqua(string s){
    stack<char> stk;
    // chi quan tam dau tru, neu la dau thi push no vao stack, 
    for (int i = 0; i < s.size();i++){
        if (s[i] == '(' ){
            if(s[i-1]=='+' || s[i-1] == '-')
                stk.push(s[i - 1]);
        }
        // neu dong ngoac thi xoa dau o dau stack
        else if(stk.size() && s[i]==')')
            stk.pop();
        // neu dau o dau stack thi tru>>cong vaf nguoc lai
        else if(stk.size() && stk.top()=='-') {
            if(s[i] == '+')
                s[i] = '-';
            else if(s[i] == '-')
                s[i] = '+';
        }
    }
    string res;
    for (int i = 0; i < s.size();i++){
        if(s[i] != '(' && s[i] != ')')
            res += s[i];
    }
    return res;
}
void testcase(){
    string s;
    cin >> s;
    cout << ketqua(s) << endl;
}
int main(){
    int x;
    cin >> x;
    while(x--){
        testcase();
    }
} 