#include <bits/stdc++.h>
using namespace std;
void testcase(){
    scanf("\n");
    string s;
    getline(cin, s);
    stack<int> stk;
    stk.push(-1);
    string res, tmp;
    for (int i = 0; i < s.size();i++){
        if(s[i]=='(')
            stk.push(i);
        else if(s[i]==')'){
            stk.pop();
            int t = tmp.size();
            cout << t << endl;
            // tmp.pop_back();
            res += tmp.substr(1,t-1);
            tmp = "";
        }else if(s[i] != ' '){
            tmp += s[i];
        }
    }
    cout << res << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}

