
#include <bits/stdc++.h>
using namespace std;
string res(string s)
{
    string ress;
    int n = s.size();
    stack<string> stk;
    for (int i = n-1; i >=0 ;i--){
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            string s1 = stk.top();
            stk.pop();
            string s2 = stk.top();
            stk.pop();
            string tmp = s1 + s2 + s[i];
            stk.push(tmp);

        }
        else{
            stk.push(string(1, s[i]));
        }
    }
    return stk.top();
}
int main()
{
    int x;
    cin >> x;
    while(x--){
        string s;
        cin >> s;
        cout << res(s) << endl;
    }
}
