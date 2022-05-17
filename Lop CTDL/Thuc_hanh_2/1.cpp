#include <bits/stdc++.h>
using namespace std;
bool check(string s){
    stack<char> stk;
    for (int i = 0; i < s.size();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            stk.push(s[i]);
        }else if(!stk.empty()){
            if(s[i] == ')' && stk.top()=='(')
                stk.pop();
            else if(s[i] == ']' && stk.top()=='[')
                stk.pop();
            else if(s[i] == '}' && stk.top()=='{')
                stk.pop();
            else
                return false;
        }
    }
    if(stk.empty())
        return true;

    return false;
}
void testcase(){
    string s;
    cin >> s;
    if(check(s))
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}