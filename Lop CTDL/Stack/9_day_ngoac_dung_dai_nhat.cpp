
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll res(string s)
{
    int n = s.size();
    stack<ll> stk;
    stk.push(-1);
    ll ress = 0;
    for (int i = 0; i < n;i++){
        if(s[i]=='(')
            stk.push(i);
        else{
            if(stk.size())
                stk.pop();
            if(stk.size()){
                ress = max(ress,i- stk.top());
            }else
                stk.push(i);
        }
    }
    return ress;
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
