
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
string res(string s)
{
    string ans;
    stringstream ss(s);
    string tmp;
    stack<string> stk;
    while(ss>>tmp){
        stk.push(tmp);
    }
    while(stk.size()){
        ans += stk.top() + " ";
        stk.pop();
    }
    return ans;
}
int main()
{
    int x;
    cin >> x;
    while(x--){
        string s;
        scanf("\n");
        getline(cin, s);
        cout << res(s) << endl;
    }
}
