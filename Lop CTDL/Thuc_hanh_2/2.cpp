#include <bits/stdc++.h>
using namespace std;
void testcase(){
    string s;
    cin >> s;
    int n = s.size(), dem = 0;
    int b[n + 1] = {0};
    s = " " + s;
    for (int i = 1; i <= n;i++){
        if(s[i]=='[')
            dem++;
        b[i] = dem;
    }
    stack<int> stk;
    stk.push(0);
    int res = 0;
    for (int i = 1; i <= n;i++){
        if(s[i]=='[' || s[i] == '('){
            stk.push(i);
        }
        else{
            if(!stk.empty() && ((s[i]==')' && s[stk.top()] != '(') || (s[i] == ']' && s[stk.top()]!='[')))
                stk.push(i);
            else{
                stk.pop();
                res = max(res, b[i] - b[stk.top()]);
            }
            if(stk.empty())
                stk.push(i);
        }
    }
    cout << res << endl;
}
int main()
{
    int x = 1;    
    while (x--)
        testcase();
}