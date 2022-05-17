#include <bits/stdc++.h>
using namespace std;
void testcase(){
    string s;
    scanf("\n");
    getline(cin, s);
    string tmp, res;
    for (int i = 0; i < s.size();i++){
        if(!isspace(s[i]))
            tmp += s[i];
    }
    s = " "+tmp;
    stack<char> stk;
    for (int i = 0; i < s.size();i++){
        if(s[i]=='('){
            if(s[i-1] == '+')
        }
    }
}
int main()
{
    int x;
    cin >> x;
    while (x--)
        testcase();
}