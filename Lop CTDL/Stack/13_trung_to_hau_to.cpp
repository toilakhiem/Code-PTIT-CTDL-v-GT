#include<bits/stdc++.h>
using namespace std;
int value(char c){
    if(c== '^' )
        return 4;
    if(c=='*' || c == '/')
        return 3;
    if(c=='+' || c=='-')
        return 2;
    return 1;
}
string ketqua(string s)
{
    string res;
    stack<char> stk;
    int n = s.size();
    for (int i = 0; i < n;i++)
    {
        if(isalpha(s[i])){
            res += s[i];
        }
        else if(s[i] == '(')
        {
            stk.push(s[i]);
        }
        else if( s[i] == ')'){
            while(stk.top()!='('){
                res += stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] =='^'){
            while(!stk.empty() && value(s[i]) <= value(stk.top())){
                res += stk.top();
                stk.pop();
            }
            stk.push(s[i]);
        }
    }
    while(stk.size()){
        if(stk.top()!='(')
            res += stk.top();
        stk.pop();
    }
    return res;
}
void testcase(){
    string s;
    getline(cin, s);
    cout << ketqua(s) << endl;
}
int main()
{
    int x;
    cin >> x;
    while(x--){
        scanf("\n");
        testcase();
    }
    return 0;
}
// ( D * (A+B) + C )

// DAB+*c+

// a^(b*c)*de