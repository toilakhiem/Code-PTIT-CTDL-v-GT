
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll tinh(int a, int b, char c){
    if(c=='+')
        return a + b;
    if(c=='-')
        return a - b;
    if(c=='*')
        return a * b;
    if(c=='/')
        return a / b;
}
ll res(string s)
{
    int n = s.size();
    stack<ll> stk;
    for (int i = n-1; i >= 0 ;i--){
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            ll s1 = stk.top();
            stk.pop();
            ll s2 = stk.top();
            stk.pop();
            ll tmp = tinh(s1, s2, s[i]);
            stk.push(tmp);
        }
        else{
            ll x = s[i] - '0';
            stk.push(x);
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
