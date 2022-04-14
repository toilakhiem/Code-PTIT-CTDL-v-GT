#include <bits/stdc++.h>
using namespace std;
bool ketqua(string s){
    stack<char> stk;
    for (int i = 0; i < s.size();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            stk.push(s[i]);
        else if(s[i] == ')' ){
            if(stk.empty() || stk.top()!='(')
                return false;
            else
                stk.pop();
        }
        else if(s[i] == ']' ){
            if(stk.empty() || stk.top()!='[')
                return false;
            else
                stk.pop();
        }
        else if(s[i] == '}' ){
            if(stk.empty() || stk.top()!='{')
                return false;
            else
                stk.pop();
        }
    }
    if(stk.size())
        return false;
    return true;
}
void testcase(){
    string s;
    cin >> s;
    if(ketqua(s))
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}

