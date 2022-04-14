#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    stack<char> stk;
    for (int i = 0; i < s.size();i++){
        if(s[i]==')'){
            bool ok = false;
            char c = stk.top();
            stk.pop();
            while(c!='('){
                if(c=='+' || c=='-' || c=='*' || c=='/')
                    ok = true;
                c = stk.top();
                stk.pop();
            }
            if(!ok)
                return true;
        }
        else
            stk.push(s[i]);
    }
    return false;
}
void testcase(){
    string s;
    getline(cin, s);
    if(check(s))
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
}
int main(){
    int x;
    cin >> x; cin.ignore();
    while(x--){
        testcase();
    }
}